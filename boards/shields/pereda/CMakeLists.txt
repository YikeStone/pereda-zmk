if(CONFIG_SHIELD_PEREDA_LEFT OR CONFIG_SHIELD_PEREDA_RIGHT)
    target_sources(app PRIVATE
        ${CMAKE_CURRENT_LIST_DIR}/xiao_charge_init.c
    )
endif()
