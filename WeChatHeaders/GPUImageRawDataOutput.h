//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "GPUImageInput.h"

@class GLProgram, GPUImageFramebuffer, NSString;

@interface GPUImageRawDataOutput : NSObject <GPUImageInput>
{
    struct CGSize imageSize;
    unsigned int inputRotation;
    BOOL outputBGRA;
    GPUImageFramebuffer *firstInputFramebuffer;
    GPUImageFramebuffer *outputFramebuffer;
    GPUImageFramebuffer *retainedFramebuffer;
    BOOL hasReadFromTheCurrentFrame;
    GLProgram *dataProgram;
    int dataPositionAttribute;
    int dataTextureCoordinateAttribute;
    int dataInputTextureUniform;
    char *_rawBytesForImage;
    BOOL lockNextFramebuffer;
    BOOL enabled;
    CDUnknownBlockType _newFrameAvailableBlock;
}

@property(nonatomic) BOOL enabled; // @synthesize enabled;
@property(copy, nonatomic) CDUnknownBlockType newFrameAvailableBlock; // @synthesize newFrameAvailableBlock=_newFrameAvailableBlock;
- (void).cxx_destruct;
- (void)unlockFramebufferAfterReading;
- (void)lockFramebufferForReading;
- (void)setImageSize:(struct CGSize)arg1;
- (unsigned int)bytesPerRowInOutput;
@property(readonly) char *rawBytesForImage; // @synthesize rawBytesForImage=_rawBytesForImage;
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
- (struct GPUByteColorVector)colorAtLocation:(struct CGPoint)arg1;
- (void)renderAtInternalSize;
- (void)dealloc;
- (id)initWithImageSize:(struct CGSize)arg1 resultsInBGRAFormat:(BOOL)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
