//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMUIView.h"

@class AAQueryDetailRes, CContact;

@interface WCPayGPOrderStatusHeaderView : MMUIView
{
    CContact *_chatroomContact;
    AAQueryDetailRes *_orderDetailData;
    MMUIView *_contentView;
    CDUnknownBlockType _onClickPayMoneyBtn;
}

@property(copy, nonatomic) CDUnknownBlockType onClickPayMoneyBtn; // @synthesize onClickPayMoneyBtn=_onClickPayMoneyBtn;
@property(retain, nonatomic) MMUIView *contentView; // @synthesize contentView=_contentView;
@property(retain, nonatomic) AAQueryDetailRes *orderDetailData; // @synthesize orderDetailData=_orderDetailData;
@property(retain, nonatomic) CContact *chatroomContact; // @synthesize chatroomContact=_chatroomContact;
- (void).cxx_destruct;
- (id)getLauncherContact;
- (id)getLauncherHeadImg;
- (BOOL)isCommonAAType;
- (void)payBtnPress:(id)arg1;
- (id)genOrderTipsLabel;
- (id)genOrderMainContentLabel;
- (id)genOrderTitleLabel;
- (void)setupOthersContentViewWithOriginY:(float)arg1 withTipsContent:(id)arg2;
- (void)setupPayerContentViewWithOriginY:(float)arg1;
- (void)setupReceiverContentViewWithOriginY:(float)arg1;
- (void)setupContentViewWhenOrderStatusUnNormalWithOriginY:(float)arg1;
- (void)setupTitleContentView;
- (void)setupContentView;
- (id)initHeaderViewWithContainerWidth:(float)arg1 orderStatusRespData:(id)arg2 chatroomContact:(id)arg3;
- (void)dealloc;

@end
