

set(ZeissXml_SRCS
#   ${${PLUGIN_NAME}_SOURCE_DIR}/ZeissXml/ZeissDirectoryPatterns.cpp
   ${${PLUGIN_NAME}_SOURCE_DIR}/ZeissXml/ZeissMetaEntry.cpp
   ${${PLUGIN_NAME}_SOURCE_DIR}/ZeissXml/ZeissMetaFactory.cpp
   ${${PLUGIN_NAME}_SOURCE_DIR}/ZeissXml/ZeissTagMapping.cpp
#   ${${PLUGIN_NAME}_SOURCE_DIR}/ZeissXml/ZeissXmlReader.cpp
   ${${PLUGIN_NAME}_SOURCE_DIR}/ZeissXml/ZeissTagsXmlSection.cpp
)


set(ZeissXml_HDRS
#   ${${PLUGIN_NAME}_SOURCE_DIR}/ZeissXml/ZeissDirectoryPatterns.h
   ${${PLUGIN_NAME}_SOURCE_DIR}/ZeissXml/ZeissMetaEntry.h
   ${${PLUGIN_NAME}_SOURCE_DIR}/ZeissXml/ZeissMetaFactory.h
   ${${PLUGIN_NAME}_SOURCE_DIR}/ZeissXml/ZeissTagMapping.h
#   ${${PLUGIN_NAME}_SOURCE_DIR}/ZeissXml/ZeissXmlReader.h
   ${${PLUGIN_NAME}_SOURCE_DIR}/ZeissXml/ZeissTagsXmlSection.h
)


# -- Run MOC and UIC on the necessary files
QT4_ADD_RESOURCES( Generated_RC_SRCS ${ZeissXml_RCS} )
# this will run uic on .ui files:
QT4_WRAP_UI( Generated_UI_HDRS ${ZeissXml_UIS} )
# and finally this will run moc:
# QT4_WRAP_CPP( Generated_MOC_SRCS ${BrukerEbsdXmlParser_MOC_HDRS} )

cmp_IDE_SOURCE_PROPERTIES( "${PLUGIN_NAME}/ZeissXml" "${ZeissXml_HDRS}" "${ZeissXml_SRCS}" "0")
