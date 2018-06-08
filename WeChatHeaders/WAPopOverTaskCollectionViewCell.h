//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UICollectionViewCell.h"

#import "WAContactMgrExtension.h"

@class MMWebImageView, NSString, UILabel, UIView, WAContactGetter, WAMainFrameTaskItem;

@interface WAPopOverTaskCollectionViewCell : UICollectionViewCell <WAContactMgrExtension>
{
    BOOL _isShowAsBackToChat;
    MMWebImageView *_headImageView;
    UILabel *_nickNameLabel;
    UILabel *_debugLabel;
    UIView *_highlightMaskView;
    WAMainFrameTaskItem *_taskItem;
    NSString *_headImageUrl;
    WAContactGetter *_contactGetter;
}

@property(retain, nonatomic) WAContactGetter *contactGetter; // @synthesize contactGetter=_contactGetter;
@property(retain, nonatomic) NSString *headImageUrl; // @synthesize headImageUrl=_headImageUrl;
@property(retain, nonatomic) WAMainFrameTaskItem *taskItem; // @synthesize taskItem=_taskItem;
@property(retain, nonatomic) UIView *highlightMaskView; // @synthesize highlightMaskView=_highlightMaskView;
@property(retain, nonatomic) UILabel *debugLabel; // @synthesize debugLabel=_debugLabel;
@property(retain, nonatomic) UILabel *nickNameLabel; // @synthesize nickNameLabel=_nickNameLabel;
@property(retain, nonatomic) MMWebImageView *headImageView; // @synthesize headImageView=_headImageView;
@property(nonatomic) BOOL isShowAsBackToChat; // @synthesize isShowAsBackToChat=_isShowAsBackToChat;
- (void).cxx_destruct;
- (void)onModifyWeAppContact:(id)arg1;
- (void)onContactUpdate:(id)arg1;
- (void)layoutSubviews;
- (void)initData;
- (void)initView;
- (void)showHighlight:(BOOL)arg1;
- (id)getCurrentTaskItem;
- (void)updateTaskItem:(id)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

