//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMUILabel.h"

@interface WCPayParamInvalidTipView : MMUILabel
{
    BOOL _bIsShowing;
}

@property(nonatomic) BOOL bIsShowing; // @synthesize bIsShowing=_bIsShowing;
- (BOOL)isTipsViewShowing;
- (void)dismiss;
- (void)showViewWithContent:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1 backgroundColor:(id)arg2 fontColor:(id)arg3;

@end
