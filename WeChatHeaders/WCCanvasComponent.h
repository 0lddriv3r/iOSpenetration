//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMUIView.h"

@class NSIndexPath, WCCanvasComponentItem, WCDataItem;

@interface WCCanvasComponent : MMUIView
{
    int _type;
    WCCanvasComponentItem *_componentItem;
    WCDataItem *_dataItem;
    NSIndexPath *_indexPath;
    int _orientation;
    float _appearFactor;
    id <WCCanvasComponentDelegate> _delegate;
}

+ (float)calcHeightForCanvasItem:(id)arg1 withMaxWidth:(float)arg2 dataItem:(id)arg3 orientation:(int)arg4;
+ (struct CGSize)calcSizeForCanvasItem:(id)arg1 dataItem:(id)arg2 orientation:(int)arg3;
+ (id)componentWithType:(int)arg1;
@property(nonatomic) __weak id <WCCanvasComponentDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) float appearFactor; // @synthesize appearFactor=_appearFactor;
@property(nonatomic) int orientation; // @synthesize orientation=_orientation;
@property(retain, nonatomic) NSIndexPath *indexPath; // @synthesize indexPath=_indexPath;
@property(retain, nonatomic) WCDataItem *dataItem; // @synthesize dataItem=_dataItem;
@property(retain, nonatomic) WCCanvasComponentItem *componentItem; // @synthesize componentItem=_componentItem;
@property(nonatomic) int type; // @synthesize type=_type;
- (void).cxx_destruct;
- (id)description;
- (void)componentWillEnterForeground;
- (void)componentDidEnterBackground;
- (void)componentWillStopState:(BOOL)arg1;
- (void)componentWillResumeState:(BOOL)arg1;
- (void)componentWillDisappearInMainScreen:(BOOL)arg1;
- (void)componentHasApperedInMainScreenWithFactor:(float)arg1;
- (void)componentDidFullyApperaInMainScreen:(BOOL)arg1;
- (void)componentWillApperaInMainScreen:(BOOL)arg1;
- (void)willRotateToOrientation:(int)arg1 duration:(double)arg2;
- (BOOL)shouldForbidDelegateShowArrowDown;
- (struct CGSize)calcCurrentSize;
- (void)configureWithCanvasItem:(id)arg1 dataItem:(id)arg2 orientation:(int)arg3;
- (id)initWithFrame:(struct CGRect)arg1;

@end
