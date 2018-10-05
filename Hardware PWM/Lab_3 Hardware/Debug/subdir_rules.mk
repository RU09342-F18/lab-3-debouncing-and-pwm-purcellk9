################################################################################
# Automatically-generated file. Do not edit!
################################################################################

SHELL = cmd.exe

# Each subdirectory must supply rules for building sources it contributes
ButtonSetup.obj: ../ButtonSetup.c $(GEN_OPTS) | $(GEN_HDRS)
	@echo 'Building file: "$<"'
	@echo 'Invoking: MSP430 Compiler'
	"D:/Programs/Code Composer/ccsv8/tools/compiler/ti-cgt-msp430_18.1.3.LTS/bin/cl430" -vmsp --use_hw_mpy=none --include_path="D:/Programs/Code Composer/ccsv8/ccs_base/msp430/include" --include_path="D:/Programs/Code Composer/Lab_3 Hardware" --include_path="D:/Programs/Code Composer/ccsv8/tools/compiler/ti-cgt-msp430_18.1.3.LTS/include" --advice:power=all --define=__MSP430G2553__ -g --printf_support=minimal --diag_warning=225 --diag_wrap=off --display_error_number --preproc_with_compile --preproc_dependency="ButtonSetup.d_raw" $(GEN_OPTS__FLAG) "$<"
	@echo 'Finished building: "$<"'
	@echo ' '

Conversions.obj: ../Conversions.c $(GEN_OPTS) | $(GEN_HDRS)
	@echo 'Building file: "$<"'
	@echo 'Invoking: MSP430 Compiler'
	"D:/Programs/Code Composer/ccsv8/tools/compiler/ti-cgt-msp430_18.1.3.LTS/bin/cl430" -vmsp --use_hw_mpy=none --include_path="D:/Programs/Code Composer/ccsv8/ccs_base/msp430/include" --include_path="D:/Programs/Code Composer/Lab_3 Hardware" --include_path="D:/Programs/Code Composer/ccsv8/tools/compiler/ti-cgt-msp430_18.1.3.LTS/include" --advice:power=all --define=__MSP430G2553__ -g --printf_support=minimal --diag_warning=225 --diag_wrap=off --display_error_number --preproc_with_compile --preproc_dependency="Conversions.d_raw" $(GEN_OPTS__FLAG) "$<"
	@echo 'Finished building: "$<"'
	@echo ' '

DutyCycleSetup.obj: ../DutyCycleSetup.c $(GEN_OPTS) | $(GEN_HDRS)
	@echo 'Building file: "$<"'
	@echo 'Invoking: MSP430 Compiler'
	"D:/Programs/Code Composer/ccsv8/tools/compiler/ti-cgt-msp430_18.1.3.LTS/bin/cl430" -vmsp --use_hw_mpy=none --include_path="D:/Programs/Code Composer/ccsv8/ccs_base/msp430/include" --include_path="D:/Programs/Code Composer/Lab_3 Hardware" --include_path="D:/Programs/Code Composer/ccsv8/tools/compiler/ti-cgt-msp430_18.1.3.LTS/include" --advice:power=all --define=__MSP430G2553__ -g --printf_support=minimal --diag_warning=225 --diag_wrap=off --display_error_number --preproc_with_compile --preproc_dependency="DutyCycleSetup.d_raw" $(GEN_OPTS__FLAG) "$<"
	@echo 'Finished building: "$<"'
	@echo ' '

LEDSetup.obj: ../LEDSetup.c $(GEN_OPTS) | $(GEN_HDRS)
	@echo 'Building file: "$<"'
	@echo 'Invoking: MSP430 Compiler'
	"D:/Programs/Code Composer/ccsv8/tools/compiler/ti-cgt-msp430_18.1.3.LTS/bin/cl430" -vmsp --use_hw_mpy=none --include_path="D:/Programs/Code Composer/ccsv8/ccs_base/msp430/include" --include_path="D:/Programs/Code Composer/Lab_3 Hardware" --include_path="D:/Programs/Code Composer/ccsv8/tools/compiler/ti-cgt-msp430_18.1.3.LTS/include" --advice:power=all --define=__MSP430G2553__ -g --printf_support=minimal --diag_warning=225 --diag_wrap=off --display_error_number --preproc_with_compile --preproc_dependency="LEDSetup.d_raw" $(GEN_OPTS__FLAG) "$<"
	@echo 'Finished building: "$<"'
	@echo ' '

TimerA0Setup.obj: ../TimerA0Setup.c $(GEN_OPTS) | $(GEN_HDRS)
	@echo 'Building file: "$<"'
	@echo 'Invoking: MSP430 Compiler'
	"D:/Programs/Code Composer/ccsv8/tools/compiler/ti-cgt-msp430_18.1.3.LTS/bin/cl430" -vmsp --use_hw_mpy=none --include_path="D:/Programs/Code Composer/ccsv8/ccs_base/msp430/include" --include_path="D:/Programs/Code Composer/Lab_3 Hardware" --include_path="D:/Programs/Code Composer/ccsv8/tools/compiler/ti-cgt-msp430_18.1.3.LTS/include" --advice:power=all --define=__MSP430G2553__ -g --printf_support=minimal --diag_warning=225 --diag_wrap=off --display_error_number --preproc_with_compile --preproc_dependency="TimerA0Setup.d_raw" $(GEN_OPTS__FLAG) "$<"
	@echo 'Finished building: "$<"'
	@echo ' '

TimerA1Setup.obj: ../TimerA1Setup.c $(GEN_OPTS) | $(GEN_HDRS)
	@echo 'Building file: "$<"'
	@echo 'Invoking: MSP430 Compiler'
	"D:/Programs/Code Composer/ccsv8/tools/compiler/ti-cgt-msp430_18.1.3.LTS/bin/cl430" -vmsp --use_hw_mpy=none --include_path="D:/Programs/Code Composer/ccsv8/ccs_base/msp430/include" --include_path="D:/Programs/Code Composer/Lab_3 Hardware" --include_path="D:/Programs/Code Composer/ccsv8/tools/compiler/ti-cgt-msp430_18.1.3.LTS/include" --advice:power=all --define=__MSP430G2553__ -g --printf_support=minimal --diag_warning=225 --diag_wrap=off --display_error_number --preproc_with_compile --preproc_dependency="TimerA1Setup.d_raw" $(GEN_OPTS__FLAG) "$<"
	@echo 'Finished building: "$<"'
	@echo ' '

main.obj: ../main.c $(GEN_OPTS) | $(GEN_HDRS)
	@echo 'Building file: "$<"'
	@echo 'Invoking: MSP430 Compiler'
	"D:/Programs/Code Composer/ccsv8/tools/compiler/ti-cgt-msp430_18.1.3.LTS/bin/cl430" -vmsp --use_hw_mpy=none --include_path="D:/Programs/Code Composer/ccsv8/ccs_base/msp430/include" --include_path="D:/Programs/Code Composer/Lab_3 Hardware" --include_path="D:/Programs/Code Composer/ccsv8/tools/compiler/ti-cgt-msp430_18.1.3.LTS/include" --advice:power=all --define=__MSP430G2553__ -g --printf_support=minimal --diag_warning=225 --diag_wrap=off --display_error_number --preproc_with_compile --preproc_dependency="main.d_raw" $(GEN_OPTS__FLAG) "$<"
	@echo 'Finished building: "$<"'
	@echo ' '


