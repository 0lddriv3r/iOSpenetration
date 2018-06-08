//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "BaseMessageCellView.h"

@class AppMMScheduleMessageViewModel, UIImageView;

@interface AppMMScheduleMessageCellView : BaseMessageCellView
{
    UIImageView *m_bgImageView;
}

- (void).cxx_destruct;
- (void)onTouchUpInside;
- (void)onTouchDown;
- (void)setHighlighted:(BOOL)arg1;
- (void)jumpScheduleOpWrap:(id)arg1;
- (void)onOPButtonClicked:(id)arg1;
- (void)onClicked;
- (id)itemLabelWithTitle:(id)arg1 width:(float)arg2 font:(id)arg3;
- (void)layoutContentView;
- (id)initWithViewModel:(id)arg1;
- (BOOL)canBeReused;

// Remaining properties
@property(readonly, nonatomic) AppMMScheduleMessageViewModel *viewModel; // @dynamic viewModel;

@end

