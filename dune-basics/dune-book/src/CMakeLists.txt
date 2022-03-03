add_executable("tutorial-1" tutorial-1.cc)
target_link_dune_default_libraries("tutorial-1")
dune_symlink_to_source_files(FILES l-shape.msh)