//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMUIView.h"

#import "CAAnimationDelegate.h"

@class NSString, UIButton, UIImageView, UILabel, UIScrollView;

@interface WCEditMemberPannel : MMUIView <CAAnimationDelegate>
{
    NSString *_descriptionTip;
    UIImageView *_backgroundView;
    UIImageView *_pannelBackgroundView;
    UIScrollView *_pannelScrollView;
    UIButton *_pannelAddButton;
    UIImageView *_pannelLineView;
    UILabel *_pannelDescLabel;
    UIButton *_closeButton;
    id <WCEditMemberPannelDelegate> _pannelDelegate;
    id <WCEditMemberPannelDataSource> _pannelDataSource;
}

@property(retain, nonatomic) NSString *descriptionTip; // @synthesize descriptionTip=_descriptionTip;
@property(nonatomic) __weak id <WCEditMemberPannelDataSource> pannelDataSource; // @synthesize pannelDataSource=_pannelDataSource;
@property(nonatomic) __weak id <WCEditMemberPannelDelegate> pannelDelegate; // @synthesize pannelDelegate=_pannelDelegate;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)hiddenAddButton:(BOOL)arg1;
- (void)showAnimation;
- (void)reload;
- (id)initWithFrame:(struct CGRect)arg1 andDecriptionTip:(id)arg2;
- (id)viewForItem:(unsigned int)arg1;
- (unsigned int)numberOfItems;
- (void)onClickAddButton;
- (void)onClickCloseButton;
- (void)initView;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
