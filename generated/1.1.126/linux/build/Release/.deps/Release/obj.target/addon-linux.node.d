cmd_Release/obj.target/addon-linux.node := g++ -shared -pthread -rdynamic -m64  -Wl,-soname=addon-linux.node -o Release/obj.target/addon-linux.node -Wl,--start-group Release/obj.target/addon-linux/src/index.o -Wl,--end-group -Wl,-rpath,/mnt/c/Users/User/Desktop/lxss-shared/Github/nvk/generated/1.1.126/linux/build/Release /mnt/c/Users/User/Desktop/lxss-shared/Github/nvk/generated/1.1.126/linux/build/Release/libvulkan.so /mnt/c/Users/User/Desktop/lxss-shared/Github/nvk/generated/1.1.126/linux/build/Release/../../../../../lib/linux/x64/GLFW/libglfw3.a -lvulkan -lXrandr -lXi -lX11 -lXxf86vm -lXinerama -lXcursor -ldl -pthread
