obj-m += fsl-dpaa2-mac.o
fsl-dpaa2-mac-objs := dpaa2-mac-standalone.o dpmac-extended.o dpaa2-mac.o dpmac.o

ccflags-y += -I$(M)
ccflags-y += -DDPAA2_MAC_C_PATH=\"$(KERNEL_SRC)/drivers/net/ethernet/freescale/dpaa2/dpaa2-mac.c\"
ccflags-y += -DDPMAC_C_PATH=\"$(KERNEL_SRC)/drivers/net/ethernet/freescale/dpaa2/dpmac.c\"
ccflags-y += -I$(KERNEL_SRC)/drivers/staging/fsl-mc/include
ccflags-y += -I$(KERNEL_SRC)/drivers/net/ethernet/freescale/dpaa2
ccflags-y += -I$(KERNEL_SRC)/include
