//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class POIInfo;

@interface WCCanvasComponentLocationInfo : NSObject
{
    POIInfo *_poiInfo;
    float _topLineSize;
    float _bottomLineSize;
}

@property(nonatomic) float bottomLineSize; // @synthesize bottomLineSize=_bottomLineSize;
@property(nonatomic) float topLineSize; // @synthesize topLineSize=_topLineSize;
@property(retain, nonatomic) POIInfo *poiInfo; // @synthesize poiInfo=_poiInfo;
- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)init;

@end

