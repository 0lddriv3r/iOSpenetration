//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMUIView.h"

@class UIButton, UIView;

@interface SetTrustedFriendTipsView : MMUIView
{
    id <SetTrustedFriendTipsViewDelegate> _m_delegate;
    UIView *_tipsView;
    UIButton *_closeButton;
}

@property(retain, nonatomic) UIButton *closeButton; // @synthesize closeButton=_closeButton;
@property(retain, nonatomic) UIView *tipsView; // @synthesize tipsView=_tipsView;
@property(nonatomic) __weak id <SetTrustedFriendTipsViewDelegate> m_delegate; // @synthesize m_delegate=_m_delegate;
- (void).cxx_destruct;
- (void)layoutTipsView;
- (void)dismissSystemMsg;
- (void)layoutSubviews;
- (id)initWithDelegate:(id)arg1;

@end

