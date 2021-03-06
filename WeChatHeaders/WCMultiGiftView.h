//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMUIView.h"

#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class MMTableView, NSArray, NSString, UIButton, WCGiftCardData;

@interface WCMultiGiftView : MMUIView <UITableViewDelegate, UITableViewDataSource>
{
    BOOL _isHide;
    float _maxWidth;
    float _minHeight;
    WCGiftCardData *_giftCardData;
    id <WCMultiGiftDelegate> _delegate;
    MMTableView *_giftTableView;
    UIButton *_footerButton;
    NSArray *_acceptedCardList;
}

@property(nonatomic) BOOL isHide; // @synthesize isHide=_isHide;
@property(retain, nonatomic) NSArray *acceptedCardList; // @synthesize acceptedCardList=_acceptedCardList;
@property(retain, nonatomic) UIButton *footerButton; // @synthesize footerButton=_footerButton;
@property(retain, nonatomic) MMTableView *giftTableView; // @synthesize giftTableView=_giftTableView;
@property(retain, nonatomic) id <WCMultiGiftDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) WCGiftCardData *giftCardData; // @synthesize giftCardData=_giftCardData;
@property(nonatomic) float minHeight; // @synthesize minHeight=_minHeight;
@property(nonatomic) float maxWidth; // @synthesize maxWidth=_maxWidth;
- (void).cxx_destruct;
- (void)doHideLogic;
- (id)createTableViewFooterView;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)configTableSize;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

