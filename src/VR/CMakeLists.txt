include(FlightGearComponent)

if(MSVC)
	set(MS_RESOURCE_FILE flightgear.rc)
endif(MSVC)

set(SOURCES
	openvrnode.cxx
	openvrdevice.cxx
	openvrupdateslavecallback.cxx
	${MS_RESOURCE_FILE}
)

set(HEADERS
	openvrnode.hxx
	openvrdevice.hxx
	openvrupdateslavecallback.hxx
)

flightgear_component(VR "${SOURCES}" "${HEADERS}")
