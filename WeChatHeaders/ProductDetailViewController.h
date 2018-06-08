//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMUIViewController.h"

#import "IScanBookMgrExt.h"
#import "MMWebImageViewDelegate.h"
#import "ProductDetailLogicHelperDelegate.h"
#import "ProductTableViewDelegate.h"
#import "SendAppMsgHandleDelegate.h"
#import "WCActionSheetDelegate.h"

@class MMAnimationTipView, MMWebImageView, NSString, ProductDetailLogicHelper, ProductTableView, ScanProductItem, SendAppMsgHandler, UIButton, UIImage, UIImageView, UIView;

@interface ProductDetailViewController : MMUIViewController <MMWebImageViewDelegate, ProductDetailLogicHelperDelegate, ProductTableViewDelegate, WCActionSheetDelegate, SendAppMsgHandleDelegate, IScanBookMgrExt>
{
    BOOL _canShareToFriend;
    BOOL _canShareToWC;
    BOOL _canAddToFav;
    BOOL _canEditTag;
    BOOL _canDelete;
    id _userdata;
    UIView *_infoView;
    float _infoViewHeight;
    MMWebImageView *_infoBgView;
    UIImageView *_blurView;
    UIImage *_snapShotImg;
    UIView *_maskView;
    MMWebImageView *_thumbImgView;
    UIButton *_containView;
    ScanProductItem *_productItem;
    NSString *_qrcodeUrl;
    ProductTableView *_productTableView;
    SendAppMsgHandler *_sendAppMsgHandler;
    MMAnimationTipView *_tipView;
    ProductDetailLogicHelper *_logicHelper;
    unsigned long _fromScene;
    UIImageView *_disclosureBtn;
    int _functionType;
    double beginTime;
    id <ProductDetailViewControllerDelegate> _delegate;
}

@property(nonatomic) __weak id <ProductDetailViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) id userdata; // @synthesize userdata=_userdata;
@property(nonatomic) BOOL canDelete; // @synthesize canDelete=_canDelete;
@property(nonatomic) BOOL canEditTag; // @synthesize canEditTag=_canEditTag;
@property(nonatomic) BOOL canAddToFav; // @synthesize canAddToFav=_canAddToFav;
@property(nonatomic) BOOL canShareToWC; // @synthesize canShareToWC=_canShareToWC;
@property(nonatomic) BOOL canShareToFriend; // @synthesize canShareToFriend=_canShareToFriend;
- (void).cxx_destruct;
- (void)onLoadImageOK:(id)arg1;
- (void)onEditProductTag;
- (void)onDeleteProduct;
- (void)OnSendAppMsgOK;
- (void)updateInfoViewAlpha:(float)arg1;
- (void)onProuductTableViewDidScroll:(id)arg1;
- (void)updateInfoViewSnapshot;
- (id)getThumbImageData;
- (id)getMessageWrap:(id)arg1;
- (id)getUpLoadTask:(id)arg1;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(int)arg2;
- (void)onAction:(id)arg1;
- (void)onCertificationClick;
- (void)onHeaderClick;
- (void)onExposeClick;
- (void)onIntroTitleClick;
- (void)dealloc;
- (void)viewDidTransitionToNewSize;
- (void)viewDidLayoutSubviews;
- (void)viewWillBeDismissed:(BOOL)arg1;
- (void)viewWillBePoped:(BOOL)arg1;
- (void)viewDidLoad;
- (void)OnReturn;
- (void)initView;
- (unsigned long)getJumpProfileScenceFromFunctionType;
- (unsigned long)getGetA8KeyScenceFromFunctionType;
- (void)setTableFooterView;
- (void)initTableView;
- (void)headerTouchUp:(id)arg1;
- (void)headerTouchDown:(id)arg1;
- (void)initInfoView;
- (BOOL)useTransparentNavibar;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)onAsyncDataRefreshed:(id)arg1;
- (void)OnGetRemoteProductItem:(id)arg1 QRCodeUrl:(id)arg2 Error:(int)arg3;
- (void)startAsyncGetActionInfo;
- (id)initWithExtContent:(id)arg1 Scence:(unsigned long)arg2;
- (id)initWithQRCodeUrl:(id)arg1 Scence:(unsigned long)arg2 FunctionType:(int)arg3;
- (id)initWithScanItem:(id)arg1 FunctionType:(int)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

