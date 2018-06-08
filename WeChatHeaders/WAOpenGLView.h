//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "EJFileSystemDelegate.h"
#import "EJNativeLogViewDelegate.h"

@class EJJavaScriptView, NSString;

@interface WAOpenGLView : UIView <EJNativeLogViewDelegate, EJFileSystemDelegate>
{
    id <WAOpenGLViewDelegate> delegate;
    EJJavaScriptView *_glView;
}

@property(nonatomic) __weak id <WAOpenGLViewDelegate> delegate; // @synthesize delegate;
- (void)prepareTypedArray:(struct OpaqueJSContext *)arg1;
- (id)getCanvasImage:(unsigned long)arg1;
- (void)setLandScape:(BOOL)arg1;
- (void)enableDebug:(BOOL)arg1;
- (CDStruct_09df043f)getPerformance;
- (BOOL)isCanvasMode;
- (unsigned long)getRunDuration;
- (void)logError:(id)arg1 desc:(id)arg2 stack:(id)arg3;
- (void)systemLog:(id)arg1;
- (void)log:(id)arg1 func:(const char *)arg2 line:(int)arg3;
- (id)getFileData:(id)arg1;
- (BOOL)isFileExist:(id)arg1;
- (void)setInterrupt:(BOOL)arg1;
- (void)stop;
- (void)resume;
- (void)pause;
- (struct OpaqueJSValue *)evaluateScript:(id)arg1 sourceURL:(id)arg2;
- (void)clearCaches;
- (void)loadScriptAtPath:(id)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1 delegate:(id)arg2;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

