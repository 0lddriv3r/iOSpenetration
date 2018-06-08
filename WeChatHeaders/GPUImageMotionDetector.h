//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "GPUImageFilterGroup.h"

@class GPUImageAverageColor, GPUImageLowPassFilter, GPUImageTwoInputFilter;

@interface GPUImageMotionDetector : GPUImageFilterGroup
{
    GPUImageLowPassFilter *lowPassFilter;
    GPUImageTwoInputFilter *frameComparisonFilter;
    GPUImageAverageColor *averageColor;
    float lowPassFilterStrength;
    CDUnknownBlockType motionDetectionBlock;
}

@property(copy, nonatomic) CDUnknownBlockType motionDetectionBlock; // @synthesize motionDetectionBlock;
- (void).cxx_destruct;
@property(nonatomic) float lowPassFilterStrength; // @synthesize lowPassFilterStrength;
- (id)init;

@end

