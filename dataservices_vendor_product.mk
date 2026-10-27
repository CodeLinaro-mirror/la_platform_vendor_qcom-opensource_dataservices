#DATA_OSS
DATA_OSS := librmnetctl
ifeq ($(ENABLE_DATA_AUTOMS),true)
DATA_OSS += libTelephonyInterface-someip
endif

PRODUCT_PACKAGES += $(DATA_OSS)
