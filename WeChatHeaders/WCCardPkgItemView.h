//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMUIView.h"

@class UIButton, UIView, WCCardData;

@interface WCCardPkgItemView : MMUIView
{
    BOOL _bSelected;
    BOOL _needSelect;
    int _indexForBatchAdd;
    UIButton *_selectBtn;
    WCCardData *_cardData;
    BOOL _bIsLongPressHandled;
    UIView *_cardBgView;
    UIView *_coverView;
    id <WCCardPkgItemViewDelegate> _delegate;
}

+ (float)CardItemViewTopHeight;
+ (float)CardItemViewHeight;
+ (float)CardItemViewHeightDynamic:(id)arg1 needSelect:(BOOL)arg2;
@property(nonatomic) int indexForBatchAdd; // @synthesize indexForBatchAdd=_indexForBatchAdd;
@property(nonatomic) __weak id <WCCardPkgItemViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) BOOL bSelected; // @synthesize bSelected=_bSelected;
@property(nonatomic) BOOL needSelect; // @synthesize needSelect=_needSelect;
- (void).cxx_destruct;
- (void)setHighlighted:(BOOL)arg1;
- (void)setSelectBtnState;
- (void)onSelectChanged;
- (id)getMaskLabelColor:(unsigned long)arg1;
- (id)getLogoView:(id)arg1;
- (id)getCardBgView:(unsigned long)arg1 bgColor:(id)arg2;
- (void)layoutSubviews;
- (void)dealloc;
- (id)initWithCardData:(id)arg1;

@end
