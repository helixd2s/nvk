cmd_Release/addon-darwin.node := c++ -bundle -Wl,-rpath,/Users/user/Documents/GitHub/nvk/generated/1.1.126/darwin/build/Release -lvulkan -lMoltenVK -framework Cocoa -framework IOKit -framework Metal -framework QuartzCore -undefined dynamic_lookup -Wl,-no_pie -Wl,-search_paths_first -mmacosx-version-min=10.10 -L/Users/user/Documents/GitHub/nvk/generated/1.1.126/darwin/build/Release -arch x86_64 -L./Release -stdlib=libc++  -o Release/addon-darwin.node Release/obj.target/addon-darwin/src/index.o /Users/user/Documents/GitHub/nvk/generated/1.1.126/darwin/build/Release/libvulkan.dylib /Users/user/Documents/GitHub/nvk/generated/1.1.126/darwin/build/Release/libMoltenVK.dylib /Users/user/Documents/GitHub/nvk/generated/1.1.126/darwin/build/Release/../../../../../lib/darwin/x64/GLFW/libglfw3.a
