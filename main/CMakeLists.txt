set(srcs 
		"MiLcropped.c"
    "spi_master_example_main.c"
    )


idf_component_register(SRCS ${srcs}
                    INCLUDE_DIRS "."
										EMBED_FILES testpng.png
                    )

