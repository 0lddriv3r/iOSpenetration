//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CaptureVideoInfo, NSArray, NSData, NSString, UIImage;

@interface MassSendWrap : NSObject
{
    unsigned long m_uiMessageType;
    NSArray *m_arrayToList;
    NSString *m_nsText;
    UIImage *m_image;
    NSData *m_dtImage;
    NSData *m_dtVoice;
    unsigned long m_uiVoiceTime;
    unsigned long m_uiVoiceTmpID;
    NSString *m_nsChatName;
    unsigned long m_uiMesLocalID;
    unsigned long m_uiIsSendAgain;
    CaptureVideoInfo *m_oVideoInfo;
    unsigned long m_uiCreateTime;
    unsigned long m_voiceFormat;
    unsigned long m_uiUploadStatus;
    NSString *m_nsUsrNameList;
    NSString *m_nsFileMD5;
}

@property(retain, nonatomic) NSString *m_nsFileMD5; // @synthesize m_nsFileMD5;
@property(retain, nonatomic) NSString *m_nsUsrNameList; // @synthesize m_nsUsrNameList;
@property(nonatomic) unsigned long m_uiUploadStatus; // @synthesize m_uiUploadStatus;
@property(nonatomic) unsigned long m_voiceFormat; // @synthesize m_voiceFormat;
@property(nonatomic) unsigned long m_uiIsSendAgain; // @synthesize m_uiIsSendAgain;
@property(nonatomic) unsigned long m_uiVoiceTmpID; // @synthesize m_uiVoiceTmpID;
@property(nonatomic) unsigned long m_uiMesLocalID; // @synthesize m_uiMesLocalID;
@property(retain, nonatomic) NSString *m_nsChatName; // @synthesize m_nsChatName;
@property(nonatomic) unsigned long m_uiCreateTime; // @synthesize m_uiCreateTime;
@property(retain, nonatomic) CaptureVideoInfo *m_oVideoInfo; // @synthesize m_oVideoInfo;
@property(nonatomic) unsigned long m_uiVoiceTime; // @synthesize m_uiVoiceTime;
@property(retain, nonatomic) NSData *m_dtVoice; // @synthesize m_dtVoice;
@property(retain, nonatomic) NSData *m_dtImage; // @synthesize m_dtImage;
@property(retain, nonatomic) UIImage *m_image; // @synthesize m_image;
@property(retain, nonatomic) NSString *m_nsText; // @synthesize m_nsText;
@property(retain, nonatomic) NSArray *m_arrayToList; // @synthesize m_arrayToList;
@property(nonatomic) unsigned long m_uiMessageType; // @synthesize m_uiMessageType;
- (void).cxx_destruct;
- (BOOL)IsSameMassSightMsg:(id)arg1;
- (BOOL)IsSameVideoMsg:(id)arg1;
- (void)dealloc;
- (id)init;

@end
