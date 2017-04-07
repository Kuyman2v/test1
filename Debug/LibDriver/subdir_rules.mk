################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Each subdirectory must supply rules for building sources it contributes
LibDriver/rtc_test.obj: ../LibDriver/rtc_test.c $(GEN_OPTS) | $(GEN_HDRS)
	@echo 'Building file: $<'
	@echo 'Invoking: C6000 Compiler'
	"D:/Program Files/CCS6.0/ccsv6/tools/compiler/ti-cgt-c6000_8.1.1/bin/cl6x" -mv6740 --include_path="D:/Program Files/CCS6.0/ccsv6/tools/compiler/ti-cgt-c6000_8.1.1/include" --include_path="D:/Program Files/CCS6.0/ccsv6/tools/compiler/ti-cgt-c6000_8.1.1/lib" --include_path="D:/Program Files/CCS6.0/ccsv6/tools/compiler/c6000_7.4.18/lib" --include_path="E:/kuyman/Temp/projects/test1/Includes" --include_path="E:/kuyman/Temp/projects/test1/Lib" -g --define=c6747 --diag_wrap=off --diag_warning=225 --display_error_number --preproc_with_compile --preproc_dependency="LibDriver/rtc_test.d" --obj_directory="LibDriver" $(GEN_OPTS__FLAG) "$<"
	@echo 'Finished building: $<'
	@echo ' '

LibDriver/uart_test.obj: ../LibDriver/uart_test.c $(GEN_OPTS) | $(GEN_HDRS)
	@echo 'Building file: $<'
	@echo 'Invoking: C6000 Compiler'
	"D:/Program Files/CCS6.0/ccsv6/tools/compiler/ti-cgt-c6000_8.1.1/bin/cl6x" -mv6740 --include_path="D:/Program Files/CCS6.0/ccsv6/tools/compiler/ti-cgt-c6000_8.1.1/include" --include_path="D:/Program Files/CCS6.0/ccsv6/tools/compiler/ti-cgt-c6000_8.1.1/lib" --include_path="D:/Program Files/CCS6.0/ccsv6/tools/compiler/c6000_7.4.18/lib" --include_path="E:/kuyman/Temp/projects/test1/Includes" --include_path="E:/kuyman/Temp/projects/test1/Lib" -g --define=c6747 --diag_wrap=off --diag_warning=225 --display_error_number --preproc_with_compile --preproc_dependency="LibDriver/uart_test.d" --obj_directory="LibDriver" $(GEN_OPTS__FLAG) "$<"
	@echo 'Finished building: $<'
	@echo ' '


