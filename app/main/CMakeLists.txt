idf_component_register(
    SRCS "app.cpp"
    INCLUDE_DIRS "."
    REQUIRES adapters  # declare dependency if main.cpp uses RMTAdapter
)
