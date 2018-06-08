//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface WCPayThirdInfo : NSObject
{
    int _m_templateID;
    NSString *_m_iconUrl;
    NSString *_m_miniIconUrl;
    NSString *_m_backgroundUrl;
    NSString *_m_receiverTitle;
    NSString *_m_receiverDes;
    NSString *_m_senderTitle;
    NSString *_m_senderDes;
    int _m_sceneID;
    NSString *_senderurl;
    NSString *_receiverurl;
    NSString *_sendernativeurl;
    NSString *_receivernativeurl;
    NSString *_titlecolor;
    NSString *_senderscenetext;
    NSString *_receiverscenetext;
    NSString *_scenetextcolor;
    NSString *_descolor;
    NSString *_paymsgid;
}

+ (id)getTextFrom:(struct XmlReaderNode_t *)arg1 atNodeName:(id)arg2;
+ (id)fromXML:(struct XmlReaderNode_t *)arg1;
@property(retain, nonatomic) NSString *paymsgid; // @synthesize paymsgid=_paymsgid;
@property(retain, nonatomic) NSString *descolor; // @synthesize descolor=_descolor;
@property(retain, nonatomic) NSString *scenetextcolor; // @synthesize scenetextcolor=_scenetextcolor;
@property(retain, nonatomic) NSString *receiverscenetext; // @synthesize receiverscenetext=_receiverscenetext;
@property(retain, nonatomic) NSString *senderscenetext; // @synthesize senderscenetext=_senderscenetext;
@property(retain, nonatomic) NSString *titlecolor; // @synthesize titlecolor=_titlecolor;
@property(copy, nonatomic) NSString *receivernativeurl; // @synthesize receivernativeurl=_receivernativeurl;
@property(copy, nonatomic) NSString *sendernativeurl; // @synthesize sendernativeurl=_sendernativeurl;
@property(copy, nonatomic) NSString *receiverurl; // @synthesize receiverurl=_receiverurl;
@property(copy, nonatomic) NSString *senderurl; // @synthesize senderurl=_senderurl;
@property(nonatomic) int m_sceneID; // @synthesize m_sceneID=_m_sceneID;
@property(retain, nonatomic) NSString *m_senderDes; // @synthesize m_senderDes=_m_senderDes;
@property(retain, nonatomic) NSString *m_senderTitle; // @synthesize m_senderTitle=_m_senderTitle;
@property(retain, nonatomic) NSString *m_receiverDes; // @synthesize m_receiverDes=_m_receiverDes;
@property(retain, nonatomic) NSString *m_receiverTitle; // @synthesize m_receiverTitle=_m_receiverTitle;
@property(retain, nonatomic) NSString *m_backgroundUrl; // @synthesize m_backgroundUrl=_m_backgroundUrl;
@property(retain, nonatomic) NSString *m_miniIconUrl; // @synthesize m_miniIconUrl=_m_miniIconUrl;
@property(retain, nonatomic) NSString *m_iconUrl; // @synthesize m_iconUrl=_m_iconUrl;
@property(nonatomic) int m_templateID; // @synthesize m_templateID=_m_templateID;
- (void).cxx_destruct;
- (id)toXML;
- (void)fromNode:(struct XmlReaderNode_t *)arg1;

@end

