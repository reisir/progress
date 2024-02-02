$SkinName = "Progress"
$ROOTCONFIG = $SkinName
$editVariablesFile = "#@#settings.inc"
$useLanguage = $False
$out = "@Resources\ContextMenu.inc"

$spacer = @{
    Title  = '-'
    Action = ''
}
$current = @{
    Title  = '#CURRENTCONFIG#'
    Action = '["#CURRENTPATH#"]'
}
$skinmenu = @{    
    Title  = if ($useLanguage) { '#__SkinMenu#' } else { 'Open skin menu' }
    Action = '[!SkinMenu]'
}
$centerHorizontal = @{
    Title  = if ($useLanguage) { '#__CenterHorizontal#' } else { 'Center horizontally' }
    Action = '[!SetWindowPosition "50%" "[#CURRENTCONFIGY]" "50%" "0%"]'
}
$centerVertical = @{
    Title  = if ($useLanguage) { '#__CenterVertical#' } else { 'Center vertically' }
    Action = '[!SetWindowPosition "([#CURRENTCONFIGX] + ([#CURRENTCONFIGWIDTH] / 2))" "50%" "50%" "50%"]'
}
$unloadSelf = @{
    Title  = "Unload $SkinName"
    Action = "[!DeactivateConfigGroup `"$SkinName`"]"
}

$menu = @(
    $current, $spacer,
    $centerHorizontal, $centerVertical, $spacer,
    $skinmenu, $unloadSelf
)

function Write-Menu {
    $output = "[Rainmeter]`nRightMouseUpAction=[!SkinCustomMenu]`nGroup=$SkinName`n"
    $count = ""

    $menu | % {
        $output += @"
ContextTitle$($count)=$($_.Title)
ContextAction$($count)=$($_.Action)

"@
        $count = 1 + $count
        if ($count -eq 1) { $count++ }
    }

    $output  | Out-File -FilePath $out 
}

Write-Menu
