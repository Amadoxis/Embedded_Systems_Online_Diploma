.global reset /*defining the symbol as global so it can be seenfrom other files*/ 
reset:
	ldr sp, =stack_top /*we use the stack top calculated in linker script */
	bl ahmed
stop: b stop /*infinite loop*/