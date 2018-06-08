//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMObject.h"

#import "IAppMsgPathMgr.h"
#import "IMsgExtendOperation.h"
#import "ISysNewXmlMsgExtendOperation.h"
#import "NSCopying.h"

@class AppInnerJumpItem, AppMMScheduleItem, AppProductItem, AppTVItem, CardTicketItem, EmoticonSharedItem, EmotionDesignerSharedItem, EmotionPageSharedItem, FavoritesItem, GiftCardItem, HardWareItem, ImageInfo, MMAsset, MMTemplateMsg3rdAppShowItem, MallProductItem, MessageExpItem, NSArray, NSData, NSMutableArray, NSMutableDictionary, NSString, OpenSDKAppBrandItem, PushMailWrap, VideoUploadStatInfo, WAAppMsgItem, WCCanvasPageItem, WCPayExtensionInfo, WCPayInfoItem, WCPayThirdInfo, WSVideoModel, iWatchAppMsgItem;

@interface CMessageWrap : MMObject <IAppMsgPathMgr, ISysNewXmlMsgExtendOperation, IMsgExtendOperation, NSCopying>
{
    BOOL m_bNew;
    unsigned long m_uiMesLocalID;
    long long m_n64MesSvrID;
    NSString *m_nsFromUsr;
    NSString *m_nsToUsr;
    unsigned long m_uiMessageType;
    NSString *m_nsContent;
    unsigned long m_uiStatus;
    unsigned long m_uiImgStatus;
    unsigned long m_uiMsgFlag;
    unsigned long m_uiCreateTime;
    NSString *m_nsPushContent;
    NSString *m_nsPushTitle;
    NSString *m_nsPushPrefix;
    NSString *m_nsPushBody;
    NSString *m_nsMsgSource;
    NSString *m_nsRealChatUsr;
    NSData *m_dtThumbnail;
    unsigned long m_uiSendTime;
    unsigned long m_uiEmojiStatFlag;
    NSString *m_nsPattern;
    BOOL m_bForward;
    BOOL m_bCdnForward;
    unsigned long m_uiPercent;
    unsigned long m_uiDownloadStatus;
    id <IMsgExtendOperation> m_extendInfoWithMsgTypeForBiz;
    id <IMsgExtendOperation> m_extendInfoWithMsgType;
    id <IMsgExtendOperation> m_extendInfoWithFromUsr;
    NSString *m_nsLastDisplayContent;
    BOOL m_isTempSessionMsg;
    BOOL m_isEnterpriseMsg;
    unsigned long m_sequenceId;
    NSString *m_firstSendMsgId;
    unsigned long m_firstSendTime;
    BOOL m_isP8Msg;
    BOOL m_bIsFromBrandSession;
    BOOL m_bIsBrandSendMass;
    NSString *m_nsKFWorkerOpenID;
    NSString *m_nsBizClientMsgID;
    NSString *m_nsBizChatId;
    unsigned long m_uiBizChatVer;
    NSString *m_nsAtUserList;
    unsigned int watchMsgSourceType;
    NSString *m_nsDisplayName;
    NSString *m_bizMsgMenuID;
    unsigned long m_bReceiveMessageSwitchStatus;
    unsigned long _m_uiFinishedLength;
    unsigned long _m_forwardType;
    NSMutableDictionary *_m_dicForwardParas;
}

+ (BOOL)isPreViewMsg;
+ (id)createMaskedThumbImageForMessageWrap:(id)arg1;
+ (id)GetCdnDownloadPathOfMsgThumb:(id)arg1;
+ (id)GetTempPathOfMesVideoWithMessageWrap:(id)arg1;
+ (id)GetPathOfMesVideoWithMessageWrap:(id)arg1;
+ (id)getMaskedVideoMsgImgThumb:(id)arg1;
+ (id)getMaskedMsgImgThumb:(id)arg1;
+ (id)getMsgImgThumb:(id)arg1;
+ (id)getPathOfVideoMsgImgThumb:(id)arg1;
+ (id)GetPathOfMaskedSquareMesImgThumbDir;
+ (id)GetPathOfMaskedSquareMesImgThumbDir:(id)arg1;
+ (id)GetPathOfSquareMesImgThumb:(id)arg1;
+ (id)getPathOfMaskedVideoMsgImgThumb:(id)arg1;
+ (id)getPathOfMaskedMsgImgThumb:(id)arg1;
+ (id)getPathOfMessageImageCache;
+ (id)getOldPathOfMessageImageCache;
+ (id)getPathOfMiddleImgForSender:(id)arg1;
+ (id)getPathOfMsgImgThumb:(id)arg1;
+ (id)getMsgMiddleImgData:(id)arg1;
+ (id)getMsgMiddleImg:(id)arg1;
+ (id)getMsgImgData:(id)arg1;
+ (id)getMsgImg:(id)arg1;
+ (id)getPathOfMsgImg:(id)arg1;
+ (id)getMsgHDImgData:(id)arg1;
+ (id)getJpgPathOfMsgImg:(id)arg1;
+ (BOOL)isVcodec2Img:(id)arg1;
+ (BOOL)MsgImgExist:(id)arg1;
+ (id)getJpgPathOfMsgHDImg:(id)arg1;
+ (BOOL)MsgHDImgExist:(id)arg1;
+ (id)getMsgHDImg:(id)arg1;
+ (id)getPathOfMsgVcodec2HDImg:(id)arg1;
+ (id)getPathOfMsgVcodec2Img:(id)arg1;
+ (id)getPathOfImageMessage:(id)arg1;
+ (id)getUserNameFromMsgWrap:(id)arg1;
+ (BOOL)isSenderFromMsgWrap:(id)arg1;
+ (BOOL)IsRecordMsg:(id)arg1;
+ (BOOL)SaveMesImg:(id)arg1 MsgWrap:(id)arg2;
+ (BOOL)SaveMsgThumbWithMsgWrap:(id)arg1;
+ (void)clearLocalMaskedThumbImage:(id)arg1;
+ (void)clearLocalImage:(id)arg1;
+ (id)FormMessageWrapFromAddMsg:(id)arg1;
+ (id)FormMessageWrapFromBuffer:(id)arg1;
+ (void)initialize;
+ (void)GetPathOfAppRemindAttach:(id)arg1 retStrPath:(id *)arg2;
+ (void)GetPathOfAppThumb:(id)arg1 LocalID:(unsigned long)arg2 retStrPath:(id *)arg3;
+ (void)GetPathOfMaskedAppThumb:(id)arg1 LocalID:(unsigned long)arg2 retStrPath:(id *)arg3;
+ (void)GetPathOfAppDataTemp:(id)arg1 LocalID:(unsigned long)arg2 retStrPath:(id *)arg3;
+ (void)GetPathOfAppDataTemp:(id)arg1 LocalID:(unsigned long)arg2 AttachId:(id)arg3 retStrPath:(id *)arg4;
+ (void)GetPathOfAppDataByUserName:(id)arg1 andMessageWrap:(id)arg2 retStrPath:(id *)arg3;
+ (void)GetPathOfAppDataByUserName:(id)arg1 andMessageWrap:(id)arg2 andAttachId:(id)arg3 andAttachFileExt:(id)arg4 retStrPath:(id *)arg5;
+ (void)GetPathOfAppData:(id)arg1 LocalID:(unsigned long)arg2 FileExt:(id)arg3 retStrPath:(id *)arg4;
+ (void)GetPathOfAppImgCacheDir:(id)arg1 retStrPath:(id *)arg2;
+ (void)GetPathOfAppDir:(id)arg1 retStrPath:(id *)arg2;
+ (id)getMessageListStatusImage:(unsigned long)arg1;
@property(retain, nonatomic) NSMutableDictionary *m_dicForwardParas; // @synthesize m_dicForwardParas=_m_dicForwardParas;
@property(nonatomic) unsigned long m_forwardType; // @synthesize m_forwardType=_m_forwardType;
@property(nonatomic) unsigned long m_uiFinishedLength; // @synthesize m_uiFinishedLength=_m_uiFinishedLength;
@property(nonatomic) unsigned long m_bReceiveMessageSwitchStatus; // @synthesize m_bReceiveMessageSwitchStatus;
@property(retain, nonatomic) NSString *m_bizMsgMenuID; // @synthesize m_bizMsgMenuID;
@property(nonatomic) BOOL m_bIsBrandSendMass; // @synthesize m_bIsBrandSendMass;
@property(nonatomic) BOOL m_bIsFromBrandSession; // @synthesize m_bIsFromBrandSession;
@property(nonatomic) unsigned long m_firstSendTime; // @synthesize m_firstSendTime;
@property(retain, nonatomic) NSString *m_firstSendMsgId; // @synthesize m_firstSendMsgId;
@property(retain, nonatomic) NSString *m_nsDisplayName; // @synthesize m_nsDisplayName;
@property(nonatomic) unsigned long m_sequenceId; // @synthesize m_sequenceId;
@property(nonatomic) BOOL m_isEnterpriseMsg; // @synthesize m_isEnterpriseMsg;
@property(nonatomic) BOOL m_isTempSessionMsg; // @synthesize m_isTempSessionMsg;
@property(nonatomic) unsigned int watchMsgSourceType; // @synthesize watchMsgSourceType;
@property(retain, nonatomic) NSString *m_nsAtUserList; // @synthesize m_nsAtUserList;
@property(nonatomic) BOOL m_isP8Msg; // @synthesize m_isP8Msg;
@property(nonatomic) unsigned long m_uiBizChatVer; // @synthesize m_uiBizChatVer;
@property(retain, nonatomic) NSString *m_nsBizChatId; // @synthesize m_nsBizChatId;
@property(retain, nonatomic) NSString *m_nsBizClientMsgID; // @synthesize m_nsBizClientMsgID;
@property(retain, nonatomic) NSString *m_nsKFWorkerOpenID; // @synthesize m_nsKFWorkerOpenID;
@property(nonatomic) unsigned long m_uiDownloadStatus; // @synthesize m_uiDownloadStatus;
@property(nonatomic) unsigned long m_uiPercent; // @synthesize m_uiPercent;
@property(retain, nonatomic) NSString *m_nsPattern; // @synthesize m_nsPattern;
@property(nonatomic) unsigned long m_uiEmojiStatFlag; // @synthesize m_uiEmojiStatFlag;
@property(nonatomic) unsigned long m_uiSendTime; // @synthesize m_uiSendTime;
@property(nonatomic) BOOL m_bNew; // @synthesize m_bNew;
@property(retain, nonatomic) NSData *m_dtThumbnail; // @synthesize m_dtThumbnail;
@property(nonatomic) BOOL m_bCdnForward; // @synthesize m_bCdnForward;
@property(nonatomic) BOOL m_bForward; // @synthesize m_bForward;
@property(retain, nonatomic) NSString *m_nsRealChatUsr; // @synthesize m_nsRealChatUsr;
@property(retain, nonatomic) id <IMsgExtendOperation> m_extendInfoWithFromUsr; // @synthesize m_extendInfoWithFromUsr;
@property(retain, nonatomic) id <IMsgExtendOperation> m_extendInfoWithMsgType; // @synthesize m_extendInfoWithMsgType;
@property(retain, nonatomic) id <IMsgExtendOperation> m_extendInfoWithMsgTypeForBiz; // @synthesize m_extendInfoWithMsgTypeForBiz;
@property(retain, nonatomic) NSString *m_nsMsgSource; // @synthesize m_nsMsgSource;
@property(retain, nonatomic) NSString *m_nsPushBody; // @synthesize m_nsPushBody;
@property(retain, nonatomic) NSString *m_nsPushPrefix; // @synthesize m_nsPushPrefix;
@property(retain, nonatomic) NSString *m_nsPushTitle; // @synthesize m_nsPushTitle;
@property(retain, nonatomic) NSString *m_nsPushContent; // @synthesize m_nsPushContent;
@property(nonatomic) unsigned long m_uiCreateTime; // @synthesize m_uiCreateTime;
@property(nonatomic) unsigned long m_uiMsgFlag; // @synthesize m_uiMsgFlag;
@property(nonatomic) unsigned long m_uiImgStatus; // @synthesize m_uiImgStatus;
@property(nonatomic) unsigned long m_uiStatus; // @synthesize m_uiStatus;
@property(retain, nonatomic) NSString *m_nsContent; // @synthesize m_nsContent;
@property(nonatomic) unsigned long m_uiMessageType; // @synthesize m_uiMessageType;
@property(retain, nonatomic) NSString *m_nsToUsr; // @synthesize m_nsToUsr;
@property(retain, nonatomic) NSString *m_nsFromUsr; // @synthesize m_nsFromUsr;
@property(nonatomic) long long m_n64MesSvrID; // @synthesize m_n64MesSvrID;
@property(nonatomic) unsigned long m_uiMesLocalID; // @synthesize m_uiMesLocalID;
- (void).cxx_destruct;
- (BOOL)canUseContineUpload;
- (BOOL)isSentOK;
- (BOOL)IsNewInvitationApprove;
- (BOOL)IsNewInvitation;
- (BOOL)IsRoomAnnouncement;
- (BOOL)IsAtMe;
- (BOOL)isShowAppMessageBlockButton;
- (BOOL)isShowAppBottomButton;
- (id)keyDescription;
@property(readonly, copy) NSString *description;
- (void)parseWCPayInfoItemIfNeed;
- (id)getWCPayMsgExtBizId;
- (unsigned long)getWCPayMsgInvalidTime;
- (BOOL)IsNeedAddWCPayMsgBizExt;
- (id)getWCPayMsgExtBizIdWithType:(unsigned long)arg1;
- (BOOL)isNewWCPayBizExtMsg:(int *)arg1;
- (BOOL)isOverseaHBMessageForNewWCPayBizExt;
- (BOOL)isAAMessageForNewWCPayBizExt;
- (BOOL)isHongBaoMessageForNewWCPayBizExt;
- (BOOL)isTransferMessageForNewWCPayBizExt;
- (BOOL)IsNeedChatExt;
- (void)genMiddleImg:(id)arg1 originImgData:(id)arg2 isSaveOK:(BOOL)arg3 delegate:(id)arg4;
- (BOOL)genImageFromMMAssetAndNotify:(id)arg1;
- (id)GetDisplayContent;
- (id)GetMsgClientMsgID;
- (BOOL)IsSameMsgWithFullCheck:(id)arg1;
- (BOOL)IsSameMsg:(id)arg1;
- (BOOL)IsSendBySendMsg;
- (BOOL)IsAppMessage;
- (BOOL)IsPureVideoMsg;
- (BOOL)IsVideoMsg;
- (BOOL)IsSimpleVideoMsg;
- (BOOL)IsImgMsg;
- (BOOL)IsTextMsg;
- (BOOL)IsChatRoomMessage;
- (BOOL)IsMassSendMessage;
- (BOOL)IsBottleMessage;
- (id)GetChatName;
- (void)AddTagToMsgSource:(id)arg1 value:(id)arg2;
- (void)UpdateMsgSource;
- (void)ChangeForDisplay;
- (void)ChangeForSimpleMsgInfo;
- (void)ChangeForBackup;
- (void)fillMsgSourceFromContact:(id)arg1 isFromTempSession:(BOOL)arg2;
- (void)ChangeForPushContent;
- (void)ChangeForMsgSource;
- (void)ChangeForChatRoom;
- (id)forwardingTargetForSelector:(SEL)arg1;
- (void)forwardInvocation:(id)arg1;
- (id)methodSignatureForSelector:(SEL)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyToMsg:(id)arg1;
- (id)initWithMsgType:(int)arg1 nsFromUsr:(id)arg2;
- (id)initWithMsgType:(int)arg1;
- (id)init;
- (id)wishingString;
- (BOOL)isForbitJumpUrl;
- (BOOL)isAAMessageForSessionStick;
- (BOOL)bIsAppUrlTypeWithCanvas;
- (id)nativeUrl;
- (int)yoType;
- (unsigned int)yoCount;
- (id)getNodeBtnList;
- (BOOL)isPriorToMsg:(id)arg1;
- (int)compareMessageAscending:(id)arg1;
- (int)compareMessageLocalIDDescending:(id)arg1;
- (void)compressToH264WithCompletionSuccess:(CDUnknownBlockType)arg1 Fail:(CDUnknownBlockType)arg2;
- (BOOL)needCompressToH264;
- (BOOL)canBeginPreload;
- (BOOL)isPreloadVideoTask;
- (unsigned int)getPickerSceneFromOptionObj;
- (CDUnknownBlockType)getVideoExportCallbackBlockWithAsset:(id)arg1 URL:(id)arg2 noCompress:(BOOL)arg3 completion:(CDUnknownBlockType)arg4;
- (void)asyncCompressVideoWithCompletion:(CDUnknownBlockType)arg1;
- (BOOL)canPlayVideo:(id)arg1;
- (BOOL)isAd;
- (id)GetCdnDownloadThumbPathOfVideo;
- (id)GetCdnDownloadPathOfVideo;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned int hash;
@property(retain, nonatomic) NSString *m_AttachedContent; // @dynamic m_AttachedContent;
@property(retain, nonatomic) NSString *m_aesKey; // @dynamic m_aesKey;
@property(retain, nonatomic) NSArray *m_arrCustomWrap; // @dynamic m_arrCustomWrap;
@property(retain, nonatomic) NSMutableArray *m_arrInviteeMembers; // @dynamic m_arrInviteeMembers;
@property(retain, nonatomic) NSMutableArray *m_arrMembers; // @dynamic m_arrMembers;
@property(retain, nonatomic) NSArray *m_arrReaderWaps; // @dynamic m_arrReaderWaps;
@property(retain, nonatomic) MMAsset *m_asset; // @dynamic m_asset;
@property(nonatomic) BOOL m_bAppAttachExistInSvr; // @dynamic m_bAppAttachExistInSvr;
@property(nonatomic) BOOL m_bCanFold; // @dynamic m_bCanFold;
@property(nonatomic) BOOL m_bFolded; // @dynamic m_bFolded;
@property(nonatomic) BOOL m_bHasApprove; // @dynamic m_bHasApprove;
@property(nonatomic) BOOL m_bIsForceUpdate; // @dynamic m_bIsForceUpdate;
@property(nonatomic) BOOL m_bNeedReloadSubView; // @dynamic m_bNeedReloadSubView;
@property(nonatomic) BOOL m_bNewApprove; // @dynamic m_bNewApprove;
@property(nonatomic) BOOL m_bNewInv; // @dynamic m_bNewInv;
@property(nonatomic) BOOL m_bShowRewardTips; // @dynamic m_bShowRewardTips;
@property(retain, nonatomic) NSString *m_cdnUrlString; // @dynamic m_cdnUrlString;
@property(retain, nonatomic) NSMutableDictionary *m_dicQuitRoomInfo; // @dynamic m_dicQuitRoomInfo;
@property(retain, nonatomic) NSMutableDictionary *m_dicStatParas; // @dynamic m_dicStatParas;
@property(retain, nonatomic) NSData *m_dtImg; // @dynamic m_dtImg;
@property(retain, nonatomic) NSData *m_dtSenderMidImg; // @dynamic m_dtSenderMidImg;
@property(retain, nonatomic) NSData *m_dtVoice; // @dynamic m_dtVoice;
@property(nonatomic) unsigned long m_duration; // @dynamic m_duration;
@property(retain, nonatomic) NSString *m_encryptUrlString; // @dynamic m_encryptUrlString;
@property(nonatomic) float m_fLatitude; // @dynamic m_fLatitude;
@property(nonatomic) float m_fLongitude; // @dynamic m_fLongitude;
@property(retain, nonatomic) NSString *m_fromChatUserName; // @dynamic m_fromChatUserName;
@property(nonatomic) unsigned long m_fullXmlLength; // @dynamic m_fullXmlLength;
@property(nonatomic) long long m_i64VoipKey; // @dynamic m_i64VoipKey;
@property(nonatomic) long m_iVoipRoomid; // @dynamic m_iVoipRoomid;
@property(retain, nonatomic) NSString *m_infoUrl; // @dynamic m_infoUrl;
@property(retain, nonatomic) NSString *m_inviterName; // @dynamic m_inviterName;
@property(nonatomic) BOOL m_isCanUpload; // @dynamic m_isCanUpload;
@property(readonly, nonatomic) BOOL m_isContentOriginal; // @dynamic m_isContentOriginal;
@property(nonatomic) BOOL m_isDirectSend; // @dynamic m_isDirectSend;
@property(nonatomic) BOOL m_isForNewYear; // @dynamic m_isForNewYear;
@property(nonatomic) BOOL m_isHideHead; // @dynamic m_isHideHead;
@property(nonatomic) BOOL m_isReaderForbidForward; // @dynamic m_isReaderForbidForward;
@property(nonatomic) double m_latitude; // @dynamic m_latitude;
@property(retain, nonatomic) NSString *m_locationLabel; // @dynamic m_locationLabel;
@property(nonatomic) double m_longitude; // @dynamic m_longitude;
@property(nonatomic) double m_mapScale; // @dynamic m_mapScale;
@property(retain, nonatomic) NSString *m_mapType; // @dynamic m_mapType;
@property(nonatomic) int m_msgInnerType; // @dynamic m_msgInnerType;
@property(nonatomic) long m_nDownloadLimit; // @dynamic m_nDownloadLimit;
@property(retain, nonatomic) NSString *m_newXmlType; // @dynamic m_newXmlType;
@property(retain, nonatomic) NSString *m_nsActivityId; // @dynamic m_nsActivityId;
@property(retain, nonatomic) NSString *m_nsAesKey; // @dynamic m_nsAesKey;
@property(retain, nonatomic) NSString *m_nsAppAction; // @dynamic m_nsAppAction;
@property(retain, nonatomic) NSString *m_nsAppAttachID; // @dynamic m_nsAppAttachID;
@property(retain, nonatomic) NSString *m_nsAppContent; // @dynamic m_nsAppContent;
@property(retain, nonatomic) NSString *m_nsAppExtInfo; // @dynamic m_nsAppExtInfo;
@property(retain, nonatomic) NSString *m_nsAppFileExt; // @dynamic m_nsAppFileExt;
@property(retain, nonatomic) NSString *m_nsAppID; // @dynamic m_nsAppID;
@property(retain, nonatomic) NSString *m_nsAppMediaDataUrl; // @dynamic m_nsAppMediaDataUrl;
@property(retain, nonatomic) NSString *m_nsAppMediaLowBandDataUrl; // @dynamic m_nsAppMediaLowBandDataUrl;
@property(retain, nonatomic) NSString *m_nsAppMediaLowUrl; // @dynamic m_nsAppMediaLowUrl;
@property(retain, nonatomic) NSString *m_nsAppMediaTagName; // @dynamic m_nsAppMediaTagName;
@property(retain, nonatomic) NSString *m_nsAppMediaUrl; // @dynamic m_nsAppMediaUrl;
@property(retain, nonatomic) NSString *m_nsAppMessageAction; // @dynamic m_nsAppMessageAction;
@property(retain, nonatomic) NSString *m_nsAppMessageExt; // @dynamic m_nsAppMessageExt;
@property(retain, nonatomic) NSString *m_nsAppName; // @dynamic m_nsAppName;
@property(retain, nonatomic) NSString *m_nsAssetId; // @dynamic m_nsAssetId;
@property(retain, nonatomic) NSString *m_nsAttachFileKey; // @dynamic m_nsAttachFileKey;
@property(retain, nonatomic) NSString *m_nsAutoDownloadControl; // @dynamic m_nsAutoDownloadControl;
@property(retain, nonatomic) NSString *m_nsDesc; // @dynamic m_nsDesc;
@property(retain, nonatomic) NSString *m_nsDesignerId; // @dynamic m_nsDesignerId;
@property(copy, nonatomic) NSString *m_nsEmoticonBelongToProductID; // @dynamic m_nsEmoticonBelongToProductID;
@property(retain, nonatomic) NSString *m_nsEmoticonMD5; // @dynamic m_nsEmoticonMD5;
@property(retain, nonatomic) NSString *m_nsExternMd5; // @dynamic m_nsExternMd5;
@property(retain, nonatomic) NSString *m_nsExternUrl; // @dynamic m_nsExternUrl;
@property(retain, nonatomic) NSString *m_nsFileParam; // @dynamic m_nsFileParam;
@property(retain, nonatomic) NSString *m_nsImgHDUrl; // @dynamic m_nsImgHDUrl;
@property(retain, nonatomic) NSString *m_nsImgMidUrl; // @dynamic m_nsImgMidUrl;
@property(retain, nonatomic) NSString *m_nsImgSrc; // @dynamic m_nsImgSrc;
@property(retain, nonatomic) NSString *m_nsInviteReason; // @dynamic m_nsInviteReason;
@property(retain, nonatomic) NSString *m_nsInviteTickets; // @dynamic m_nsInviteTickets;
@property(retain, nonatomic) NSString *m_nsJsAppId; // @dynamic m_nsJsAppId;
@property(retain, nonatomic) NSString *m_nsMsgAttachUrl; // @dynamic m_nsMsgAttachUrl;
@property(retain, nonatomic) NSString *m_nsMsgDataUrl; // @dynamic m_nsMsgDataUrl;
@property(retain, nonatomic) NSString *m_nsMsgMd5; // @dynamic m_nsMsgMd5;
@property(retain, nonatomic) NSString *m_nsMsgThumbAesKey; // @dynamic m_nsMsgThumbAesKey;
@property(retain, nonatomic) NSString *m_nsMsgThumbMd5; // @dynamic m_nsMsgThumbMd5;
@property(retain, nonatomic) NSString *m_nsMsgThumbUrl; // @dynamic m_nsMsgThumbUrl;
@property(retain, nonatomic) NSString *m_nsNewMd5; // @dynamic m_nsNewMd5;
@property(retain, nonatomic) NSString *m_nsNoPreDownloadRange; // @dynamic m_nsNoPreDownloadRange;
@property(retain, nonatomic) NSString *m_nsRemindAttachId; // @dynamic m_nsRemindAttachId;
@property(retain, nonatomic) NSString *m_nsRevokeContent; // @dynamic m_nsRevokeContent;
@property(retain, nonatomic) NSString *m_nsShareOpenUrl; // @dynamic m_nsShareOpenUrl;
@property(retain, nonatomic) NSString *m_nsShareOriginUrl; // @dynamic m_nsShareOriginUrl;
@property(retain, nonatomic) NSString *m_nsSourceDisplayname; // @dynamic m_nsSourceDisplayname;
@property(retain, nonatomic) NSString *m_nsSourceUsername; // @dynamic m_nsSourceUsername;
@property(retain, nonatomic) NSString *m_nsStatExtStr; // @dynamic m_nsStatExtStr;
@property(retain, nonatomic) NSString *m_nsStreamVideoAdUxInfo; // @dynamic m_nsStreamVideoAdUxInfo;
@property(retain, nonatomic) NSString *m_nsStreamVideoPublishId; // @dynamic m_nsStreamVideoPublishId;
@property(retain, nonatomic) NSString *m_nsStreamVideoThumbUrl; // @dynamic m_nsStreamVideoThumbUrl;
@property(retain, nonatomic) NSString *m_nsStreamVideoTitle; // @dynamic m_nsStreamVideoTitle;
@property(retain, nonatomic) NSString *m_nsStreamVideoUrl; // @dynamic m_nsStreamVideoUrl;
@property(retain, nonatomic) NSString *m_nsStreamVideoWebUrl; // @dynamic m_nsStreamVideoWebUrl;
@property(retain, nonatomic) NSString *m_nsStreamVideoWording; // @dynamic m_nsStreamVideoWording;
@property(retain, nonatomic) NSString *m_nsTemplateId; // @dynamic m_nsTemplateId;
@property(retain, nonatomic) NSString *m_nsThumbImgUrl; // @dynamic m_nsThumbImgUrl;
@property(retain, nonatomic) NSString *m_nsThumbUrl; // @dynamic m_nsThumbUrl;
@property(retain, nonatomic) NSString *m_nsTitle; // @dynamic m_nsTitle;
@property(retain, nonatomic) AppInnerJumpItem *m_oAppInnerJumpItem; // @dynamic m_oAppInnerJumpItem;
@property(retain, nonatomic) AppProductItem *m_oAppProductItem; // @dynamic m_oAppProductItem;
@property(retain, nonatomic) AppTVItem *m_oAppTVItem; // @dynamic m_oAppTVItem;
@property(retain, nonatomic) WCCanvasPageItem *m_oCanvasPageItem; // @dynamic m_oCanvasPageItem;
@property(retain, nonatomic) CardTicketItem *m_oCardTicketItem; // @dynamic m_oCardTicketItem;
@property(retain, nonatomic) EmoticonSharedItem *m_oEmoticonSharedItem; // @dynamic m_oEmoticonSharedItem;
@property(retain, nonatomic) EmotionDesignerSharedItem *m_oEmotionDesignerSharedItem; // @dynamic m_oEmotionDesignerSharedItem;
@property(retain, nonatomic) EmotionPageSharedItem *m_oEmotionPageSharedItem; // @dynamic m_oEmotionPageSharedItem;
@property(retain, nonatomic) GiftCardItem *m_oGiftCardItem;
@property(retain, nonatomic) HardWareItem *m_oHardWareItem; // @dynamic m_oHardWareItem;
@property(retain, nonatomic) ImageInfo *m_oImageInfo; // @dynamic m_oImageInfo;
@property(retain, nonatomic) MallProductItem *m_oMallProductItem; // @dynamic m_oMallProductItem;
@property(retain, nonatomic) MessageExpItem *m_oMsgExpItem; // @dynamic m_oMsgExpItem;
@property(retain, nonatomic) PushMailWrap *m_oPushMailWrap; // @dynamic m_oPushMailWrap;
@property(retain, nonatomic) FavoritesItem *m_oRecordItem; // @dynamic m_oRecordItem;
@property(retain, nonatomic) MMTemplateMsg3rdAppShowItem *m_oTemplateMsg3rdAppShowItem;
@property(retain, nonatomic) VideoUploadStatInfo *m_oVideoUploadStatInfo; // @dynamic m_oVideoUploadStatInfo;
@property(retain, nonatomic) WAAppMsgItem *m_oWAAppItem; // @dynamic m_oWAAppItem;
@property(retain, nonatomic) WCPayInfoItem *m_oWCPayInfoItem; // @dynamic m_oWCPayInfoItem;
@property(retain, nonatomic) iWatchAppMsgItem *m_oiWatchMsgItem; // @dynamic m_oiWatchMsgItem;
@property(retain, nonatomic) OpenSDKAppBrandItem *m_openSDKAppBrandItem; // @dynamic m_openSDKAppBrandItem;
@property(retain, nonatomic) WCPayExtensionInfo *m_payExtensionInfo; // @dynamic m_payExtensionInfo;
@property(retain, nonatomic) NSString *m_poiName; // @dynamic m_poiName;
@property(retain, nonatomic) NSString *m_qrCode; // @dynamic m_qrCode;
@property(nonatomic) unsigned long m_realInnerType;
@property(nonatomic) CMessageWrap *m_refMessageWrap; // @dynamic m_refMessageWrap;
@property(retain, nonatomic) AppMMScheduleItem *m_scheduleItem; // @dynamic m_scheduleItem;
@property(retain, nonatomic) NSString *m_sessionShowContent; // @dynamic m_sessionShowContent;
@property(retain, nonatomic) NSString *m_showContent; // @dynamic m_showContent;
@property(retain, nonatomic) WCPayThirdInfo *m_thirdC2CInfo; // @dynamic m_thirdC2CInfo;
@property(nonatomic) unsigned long m_uiApiSDKVersion; // @dynamic m_uiApiSDKVersion;
@property(nonatomic) unsigned long m_uiAppContentAttributeBitSetFlag; // @dynamic m_uiAppContentAttributeBitSetFlag;
@property(nonatomic) unsigned long m_uiAppDataSize; // @dynamic m_uiAppDataSize;
@property(nonatomic) unsigned long m_uiAppExtShowType; // @dynamic m_uiAppExtShowType;
@property(nonatomic) unsigned long m_uiAppMsgInnerType; // @dynamic m_uiAppMsgInnerType;
@property(nonatomic) unsigned long m_uiAppVersion; // @dynamic m_uiAppVersion;
@property(nonatomic) unsigned long m_uiCameraType; // @dynamic m_uiCameraType;
@property(nonatomic) unsigned long m_uiContinueUploadCount; // @dynamic m_uiContinueUploadCount;
@property(nonatomic) unsigned long m_uiDownloadPercent; // @dynamic m_uiDownloadPercent;
@property(nonatomic) unsigned long m_uiEmoticonHeight; // @dynamic m_uiEmoticonHeight;
@property(nonatomic) unsigned long m_uiEmoticonType; // @dynamic m_uiEmoticonType;
@property(nonatomic) unsigned long m_uiEmoticonWidth; // @dynamic m_uiEmoticonWidth;
@property(nonatomic) unsigned long m_uiEncryVer; // @dynamic m_uiEncryVer;
@property(nonatomic) unsigned long m_uiGameContent; // @dynamic m_uiGameContent;
@property(nonatomic) unsigned long m_uiGameType; // @dynamic m_uiGameType;
@property(nonatomic) unsigned long m_uiHDImgSize; // @dynamic m_uiHDImgSize;
@property(nonatomic) unsigned long m_uiMsgThumbHeight; // @dynamic m_uiMsgThumbHeight;
@property(nonatomic) unsigned long m_uiMsgThumbSize; // @dynamic m_uiMsgThumbSize;
@property(nonatomic) unsigned long m_uiMsgThumbWidth; // @dynamic m_uiMsgThumbWidth;
@property(nonatomic) unsigned long m_uiNormalImgSize; // @dynamic m_uiNormalImgSize;
@property(nonatomic) unsigned long m_uiOriginFormat; // @dynamic m_uiOriginFormat;
@property(nonatomic) unsigned long m_uiOriginMsgSvrId; // @dynamic m_uiOriginMsgSvrId;
@property(nonatomic) unsigned long m_uiPreDownloadNetType; // @dynamic m_uiPreDownloadNetType;
@property(nonatomic) unsigned long m_uiPreDownloadPercent; // @dynamic m_uiPreDownloadPercent;
@property(nonatomic) unsigned long m_uiRemindAttachTotalLen; // @dynamic m_uiRemindAttachTotalLen;
@property(nonatomic) unsigned long m_uiRemindFormat; // @dynamic m_uiRemindFormat;
@property(nonatomic) unsigned long m_uiRemindId; // @dynamic m_uiRemindId;
@property(nonatomic) unsigned long m_uiRemindTime; // @dynamic m_uiRemindTime;
@property(nonatomic) unsigned long m_uiScene; // @dynamic m_uiScene;
@property(nonatomic) unsigned long m_uiShowType; // @dynamic m_uiShowType;
@property(nonatomic) unsigned long m_uiSoundType; // @dynamic m_uiSoundType;
@property(nonatomic) unsigned long m_uiStreamVideoTime; // @dynamic m_uiStreamVideoTime;
@property(nonatomic) unsigned long m_uiTemplateType;
@property(nonatomic) unsigned long m_uiUploadStatus; // @dynamic m_uiUploadStatus;
@property(nonatomic) unsigned long m_uiVideoFormat; // @dynamic m_uiVideoFormat;
@property(nonatomic) unsigned long m_uiVideoLen; // @dynamic m_uiVideoLen;
@property(nonatomic) unsigned long m_uiVideoOffset; // @dynamic m_uiVideoOffset;
@property(nonatomic) unsigned long m_uiVideoSource; // @dynamic m_uiVideoSource;
@property(nonatomic) unsigned long m_uiVideoTime; // @dynamic m_uiVideoTime;
@property(nonatomic) unsigned long m_uiVoiceCancelFlag; // @dynamic m_uiVoiceCancelFlag;
@property(nonatomic) unsigned long m_uiVoiceEndFlag; // @dynamic m_uiVoiceEndFlag;
@property(nonatomic) unsigned long m_uiVoiceFormat; // @dynamic m_uiVoiceFormat;
@property(nonatomic) unsigned long m_uiVoiceForwardFlag; // @dynamic m_uiVoiceForwardFlag;
@property(nonatomic) unsigned long m_uiVoiceTime; // @dynamic m_uiVoiceTime;
@property(nonatomic) unsigned long m_uiVoipInviteType; // @dynamic m_uiVoipInviteType;
@property(nonatomic) unsigned int m_uiVoipRecvTime; // @dynamic m_uiVoipRecvTime;
@property(nonatomic) unsigned long m_uiVoipStatus; // @dynamic m_uiVoipStatus;
@property(nonatomic) unsigned long m_uiWeAppState; // @dynamic m_uiWeAppState;
@property(nonatomic) unsigned long m_uiWeAppVersion; // @dynamic m_uiWeAppVersion;
@property(retain, nonatomic) NSString *m_url; // @dynamic m_url;
@property(retain, nonatomic) WSVideoModel *m_videoFlowInfo; // @dynamic m_videoFlowInfo;
@property(nonatomic) unsigned long m_wordingType; // @dynamic m_wordingType;
@property(readonly) Class superclass;

@end
