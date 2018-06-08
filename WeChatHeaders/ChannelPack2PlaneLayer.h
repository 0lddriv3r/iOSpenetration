//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CNNKernel.h"

@class CNNBuffer;

@interface ChannelPack2PlaneLayer : CNNKernel
{
    CNNBuffer *_dimensionsBuffer;
}

@property(retain, nonatomic) CNNBuffer *dimensionsBuffer; // @synthesize dimensionsBuffer=_dimensionsBuffer;
- (void).cxx_destruct;
- (void)findBestThreadgroupsPerGrid:(CDStruct_32a7f38a *)arg1 threadsPerThreadgroup:(CDStruct_32a7f38a *)arg2;
- (BOOL)encodeWithCommandBuffer:(id)arg1 sourceImage:(id)arg2 destinationImage:(id)arg3;
- (id)constructWithLayerData:(const struct layer_res *)arg1;
- (id)initWithInputDimension:(struct CNNDimension)arg1 device:(id)arg2 library:(id)arg3;

@end
