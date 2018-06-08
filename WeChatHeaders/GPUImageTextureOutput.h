//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "GPUImageInput.h"

@class GPUImageFramebuffer, NSString;

@interface GPUImageTextureOutput : NSObject <GPUImageInput>
{
    GPUImageFramebuffer *firstInputFramebuffer;
    BOOL enabled;
    id <GPUImageTextureOutputDelegate> _delegate;
    unsigned int _texture;
}

@property(nonatomic) BOOL enabled; // @synthesize enabled;
@property(readonly) unsigned int texture; // @synthesize texture=_texture;
@property(nonatomic) id <GPUImageTextureOutputDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)setCurrentlyReceivingMonochromeInput:(BOOL)arg1;
- (BOOL)wantsMonochromeInput;
- (BOOL)shouldIgnoreUpdatesToThisTarget;
- (void)endProcessing;
- (struct CGSize)maximumOutputSize;
- (void)setInputSize:(struct CGSize)arg1 atIndex:(int)arg2;
- (void)setInputRotation:(unsigned int)arg1 atIndex:(int)arg2;
- (void)setInputFramebuffer:(id)arg1 atIndex:(int)arg2;
- (int)nextAvailableTextureIndex;
- (void)newFrameReadyAtTime:(CDStruct_1b6d18a9)arg1 atIndex:(int)arg2;
- (void)doneWithTexture;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
