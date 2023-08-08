[CmdletBinding()]
param(
    [switch]$Clean = $false, 
    [ValidateSet("Release", "Dev")]$BuildConf = "Dev",
    $BuildDir = "build",
    $Generator = "Visual Studio 17 2022",
    [switch]$WithSamples = $false
)

if ($Clean -and (Test-Path -Path $BuildDir)) {
    Write-Output ----------------------------
    Write-Output "Removing $BuildDir"
    Remove-Item $BuildDir -Recurse
    Write-Output ----------------------------
}

if ($WithSamples) {
    $samplesFlags += " -DBUILD_SAMPLES=On"
}

if ($BuildConf -eq "Release"){
    cmake -B"$BuildDir" -DCMAKE_SYSTEM_VERSION="10.0" -DBUILD_PROD=On "-G$Generator" $cmakeLibraryPath "$samplesFlags" .
} else {
    cmake -B"$BuildDir" -DCMAKE_SYSTEM_VERSION="10.0" -G"$Generator" "$samplesFlags" .
}

Write-Output "Generated solution in directory $BuildDir with $BuildConf configuration."