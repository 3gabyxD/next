param([Int32]$run=0)

$error.Clear()

# Add files here
try { g++ -o main src\main.cpp }
catch { "Error occured" }
if (!$error) {
	if ( $run -eq 1 ) {
		# Add arguments here
		.\main.exe
	}
}
# Write-Output "Hello World"
# if ( $run -eq 1 ) { .\main.exe }