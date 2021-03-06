//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "GPUImageTwoInputFilter.h"

@interface GPUImageBrightnessRefineFilter : GPUImageTwoInputFilter
{
    int ratioParamUniform;
    int offsetParamUniform;
    int curveIndexUniform;
    float _ratioParam;
    float _offsetParam;
    float _curveIndex;
    float _maxRatioTH;
    float _maxOffsetTH;
    float _timeParam;
}

@property(nonatomic) float timeParam; // @synthesize timeParam=_timeParam;
@property(nonatomic) float maxOffsetTH; // @synthesize maxOffsetTH=_maxOffsetTH;
@property(nonatomic) float maxRatioTH; // @synthesize maxRatioTH=_maxRatioTH;
@property(nonatomic) float curveIndex; // @synthesize curveIndex=_curveIndex;
@property(nonatomic) float offsetParam; // @synthesize offsetParam=_offsetParam;
@property(nonatomic) float ratioParam; // @synthesize ratioParam=_ratioParam;
- (void)setInputFramebuffer:(id)arg1 atIndex:(int)arg2;
- (void)reset;
- (id)init;

@end

