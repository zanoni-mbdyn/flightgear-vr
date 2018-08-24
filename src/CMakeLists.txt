
include_directories(${PROJECT_SOURCE_DIR})

# note order here affects link order, and hence linking correctness
# on systems with a traditional ld (eg, GNU ld on Linux)
foreach( mylibfolder
		Add-ons
		Airports
		Aircraft
		ATC
		EmbeddedResources
		Canvas
		Radio
		Autopilot
		Cockpit
		Environment
		GUI
		Input
		Instrumentation
		Model
		MultiPlayer
		AIModel
		Navaids
		Network
		Scenery
		Scripting
		Sound
		Systems
		Time
		Traffic
		FDM
		VR
		Viewer
		Main
	)

	add_subdirectory(${mylibfolder})

endforeach( mylibfolder )

# if(HAVE_OPENVR)
#	add_subdirectory(VR)
# endif(HAVE_OPENVR)

