//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WCCanvasComponent.h"

#import "WCCanvasImageLoaderObserver.h"

@class NSString, UIImageView;

@interface WCCanvasRadarChartComponent : WCCanvasComponent <WCCanvasImageLoaderObserver>
{
    UIImageView *_bgImageView;
    UIImageView *_maskImageView;
}

+ (struct CGSize)calcSizeForCanvasItem:(id)arg1 dataItem:(id)arg2 orientation:(int)arg3;
@property(retain, nonatomic) UIImageView *maskImageView; // @synthesize maskImageView=_maskImageView;
@property(retain, nonatomic) UIImageView *bgImageView; // @synthesize bgImageView=_bgImageView;
- (void).cxx_destruct;
- (int)dimensions;
- (id)coverColor;
- (void)resizeBorderImageView;
- (void)ImageDidLoad:(id)arg1 Url:(id)arg2;
- (void)configureWithCanvasItem:(id)arg1 dataItem:(id)arg2 orientation:(int)arg3;
- (id)vertexesForCenterPoint:(struct CGPoint)arg1 radius:(float)arg2;
- (void)drawAtCenter:(struct CGPoint)arg1 vertexes:(id)arg2 values:(id)arg3 fillColor:(id)arg4 withCenterLine:(BOOL)arg5 isTargetPoints:(BOOL)arg6;
- (void)drawBackgroundAtCenterPoint:(struct CGPoint)arg1 radius:(float)arg2;
- (void)drawItemsAtCenterPoint:(struct CGPoint)arg1 radius:(float)arg2;
- (float)calcRadiusInsideRect:(struct CGRect)arg1;
- (void)drawRect:(struct CGRect)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

