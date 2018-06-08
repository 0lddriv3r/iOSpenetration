//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "EJBindingBase.h"

#import "EJDrawable.h"

@class EJBindingCanvasStyle, EJCanvasContext, EJTexture;

@interface EJBindingCanvas : EJBindingBase <EJDrawable>
{
    struct OpaqueJSValue *jsCanvasContext;
    EJCanvasContext *renderingContext;
    int contextMode;
    short width;
    short height;
    EJBindingCanvasStyle *styleObject;
    int imageRendering;
    struct CGRect style;
    BOOL isScreenCanvas;
    unsigned long canvasId;
    float styleWidth;
    float styleHeight;
    float styleLeft;
    float styleTop;
}

+ (id)_const_tagName;
+ (id)_const_nodeName;
+ (void *)_ptr_to_func_toDataURL;
+ (void *)_ptr_to_func_getContext;
+ (void *)_ptr_to_get_offsetHeight;
+ (void *)_ptr_to_get_offsetWidth;
+ (void *)_ptr_to_get_offsetTop;
+ (void *)_ptr_to_get_offsetLeft;
+ (void *)_ptr_to_get_style;
+ (void *)_ptr_to_set_height;
+ (void *)_ptr_to_get_height;
+ (void *)_ptr_to_set_width;
+ (void *)_ptr_to_get___id;
+ (void *)_ptr_to_get_width;
- (id)getCanvasImage;
- (BOOL)isWebGLScreen;
- (struct OpaqueJSValue *)_func_toDataURL:(struct OpaqueJSContext *)arg1 argc:(unsigned long)arg2 argv:(const struct OpaqueJSValue **)arg3;
- (struct OpaqueJSValue *)toDataURLWithCtx:(struct OpaqueJSContext *)arg1 argc:(unsigned long)arg2 argv:(const struct OpaqueJSValue **)arg3;
- (struct OpaqueJSValue *)_func_getContext:(struct OpaqueJSContext *)arg1 argc:(unsigned long)arg2 argv:(const struct OpaqueJSValue **)arg3;
- (struct OpaqueJSValue *)_get_offsetHeight:(struct OpaqueJSContext *)arg1;
- (struct OpaqueJSValue *)_get_offsetWidth:(struct OpaqueJSContext *)arg1;
- (struct OpaqueJSValue *)_get_offsetTop:(struct OpaqueJSContext *)arg1;
- (struct OpaqueJSValue *)_get_offsetLeft:(struct OpaqueJSContext *)arg1;
- (struct OpaqueJSValue *)_get_style:(struct OpaqueJSContext *)arg1;
- (void)_set_height:(struct OpaqueJSContext *)arg1 value:(struct OpaqueJSValue *)arg2;
- (struct OpaqueJSValue *)_get_height:(struct OpaqueJSContext *)arg1;
- (void)_set_width:(struct OpaqueJSContext *)arg1 value:(struct OpaqueJSValue *)arg2;
- (struct OpaqueJSValue *)_get___id:(struct OpaqueJSContext *)arg1;
- (struct OpaqueJSValue *)_get_width:(struct OpaqueJSContext *)arg1;
@property(nonatomic) int imageRendering;
@property(nonatomic) float styleTop; // @synthesize styleTop;
@property(nonatomic) float styleLeft; // @synthesize styleLeft;
@property(nonatomic) float styleHeight; // @synthesize styleHeight;
@property(nonatomic) float styleWidth; // @synthesize styleWidth;
@property(readonly, nonatomic) EJTexture *texture;
- (void)dealloc;
- (void)createWithJSObject:(struct OpaqueJSValue *)arg1 scriptView:(id)arg2;

@end

