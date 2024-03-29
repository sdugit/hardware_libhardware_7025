#ifndef __HWCOMPOSER_PRIV_H__
#define __HWCOMPOSER_PRIV_H__


#define  MAX_FBNUM		8
#define  MAX_LAYERNUM	8

typedef struct sun4i_hwc_layer
{
	hwc_layer_t			base;
	
	uint32_t            dispW;
    uint32_t            dispH;
    uint32_t			org_dispW;
    uint32_t			org_dispH;
    
	uint32_t    		cropX;
    uint32_t    		cropY;
    uint32_t    		cropW;
    uint32_t    		cropH;
    
    uint32_t    		posX;
    uint32_t   	 		posY;
    uint32_t    		posW;
    uint32_t    		posH;
    
    uint32_t    		posX_last;
    uint32_t    		posY_last;
    uint32_t    		posW_last;
    uint32_t    		posH_last;

    uint32_t    		posX_org;
    uint32_t    		posY_org;
    uint32_t    		posW_org;
    uint32_t    		posH_org;
    
    uint32_t			cur_framehandle;
    uint32_t			screen;
    uint32_t			currenthandle;
	uint32_t			cur_frameid;
} sun4i_hwc_layer_t;


typedef struct sun4i_hwc_device 
{

}sun4i_hwc_device_t;

typedef struct hwc_context_t 
{
    hwc_composer_device_t 	base;
    hwc_procs_t 			*procs;
    int						dispfd;
    sun4i_hwc_layer_t		hwc_layer;
    int						hwc_screen;
    uint32_t				cur_hdmimode;
	uint32_t				cur_3dmode;
	bool					cur_half_enable;
	bool					cur_3denable;
    /* our private state goes below here */
}sun4i_hwc_context_t;

#endif
