//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMUIView.h"

#import "CAAnimationDelegate.h"

@class NSString, UIImageView;

@interface WCFacingReceiveMoneyDisplayView : MMUIView <CAAnimationDelegate>
{
    UIImageView *backgroundView;
    id userInfo;
    struct CGRect m_frame;
}

@property(retain, nonatomic) id userInfo; // @synthesize userInfo;
- (void).cxx_destruct;
- (void)closeView;
- (void)showEndAnimation:(struct CGPoint)arg1;
- (void)showStartAnimation;
- (void)dealloc;
- (void)layoutSubviews;
- (id)initWithUserName:(id)arg1 TotalMoney:(id)arg2 Frame:(struct CGRect)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

