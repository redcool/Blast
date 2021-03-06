#
# Build SampleAssetViewer Windows
#

SET(SAMPLEASSETVIEWER_PLATFORM_COMMON_FILES
)

SET(SAMPLEASSETVIEWER_PLATFORM_INCLUDES
)

SET(SAMPLEASSETVIEWER_COMPILE_DEFS
	# Common to all configurations
	${SAMPLES_SLN_COMPILE_DEFS}
	
	$<$<CONFIG:debug>:${SAMPLES_SLN_DEBUG_COMPILE_DEFS}>
	$<$<CONFIG:checked>:${SAMPLES_SLN_CHECKED_COMPILE_DEFS}>
	$<$<CONFIG:profile>:${SAMPLES_SLN_PROFILE_COMPILE_DEFS}>
	$<$<CONFIG:release>:${SAMPLES_SLN_RELEASE_COMPILE_DEFS}>
)

SET(SAMPLEASSETVIEWER_LINK_FLAGS "/SUBSYSTEM:WINDOWS")
