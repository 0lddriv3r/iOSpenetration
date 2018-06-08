//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDate, NSString, UIColor;

@interface TemplateHeaderWrap : NSObject
{
    BOOL _hideTitleAndTime;
    BOOL _showIconAndDisplayName;
    BOOL _hideIconAndDisplayNameLine;
    BOOL _showComplaintButton;
    BOOL _objIsShowShortcutIcon;
    BOOL _hideTitle;
    BOOL _hideTime;
    BOOL _isIgnoreHideTitleAndTimeFlag;
    NSString *_title;
    UIColor *_titleColor;
    NSDate *_pubTime;
    NSString *_first;
    UIColor *_firstColor;
    NSString *_iconUrl;
    NSString *_displayName;
    NSString *_templateMsgId;
    NSString *_objShortcutIconURL;
    NSString *_objH5Url;
    NSString *_objWeAppUserName;
    NSString *_objWeAppPath;
    unsigned long _weappVersion;
    unsigned long _weappState;
    unsigned long _paymsgStyle;
}

@property(nonatomic) unsigned long paymsgStyle; // @synthesize paymsgStyle=_paymsgStyle;
@property(nonatomic) BOOL isIgnoreHideTitleAndTimeFlag; // @synthesize isIgnoreHideTitleAndTimeFlag=_isIgnoreHideTitleAndTimeFlag;
@property(nonatomic) BOOL hideTime; // @synthesize hideTime=_hideTime;
@property(nonatomic) BOOL hideTitle; // @synthesize hideTitle=_hideTitle;
@property(nonatomic) unsigned long weappState; // @synthesize weappState=_weappState;
@property(nonatomic) unsigned long weappVersion; // @synthesize weappVersion=_weappVersion;
@property(retain, nonatomic) NSString *objWeAppPath; // @synthesize objWeAppPath=_objWeAppPath;
@property(retain, nonatomic) NSString *objWeAppUserName; // @synthesize objWeAppUserName=_objWeAppUserName;
@property(retain, nonatomic) NSString *objH5Url; // @synthesize objH5Url=_objH5Url;
@property(retain, nonatomic) NSString *objShortcutIconURL; // @synthesize objShortcutIconURL=_objShortcutIconURL;
@property(nonatomic) BOOL objIsShowShortcutIcon; // @synthesize objIsShowShortcutIcon=_objIsShowShortcutIcon;
@property(retain, nonatomic) NSString *templateMsgId; // @synthesize templateMsgId=_templateMsgId;
@property(nonatomic) BOOL showComplaintButton; // @synthesize showComplaintButton=_showComplaintButton;
@property(nonatomic) BOOL hideIconAndDisplayNameLine; // @synthesize hideIconAndDisplayNameLine=_hideIconAndDisplayNameLine;
@property(nonatomic) BOOL showIconAndDisplayName; // @synthesize showIconAndDisplayName=_showIconAndDisplayName;
@property(nonatomic) BOOL hideTitleAndTime; // @synthesize hideTitleAndTime=_hideTitleAndTime;
@property(retain, nonatomic) NSString *displayName; // @synthesize displayName=_displayName;
@property(retain, nonatomic) NSString *iconUrl; // @synthesize iconUrl=_iconUrl;
@property(retain, nonatomic) UIColor *firstColor; // @synthesize firstColor=_firstColor;
@property(retain, nonatomic) NSString *first; // @synthesize first=_first;
@property(retain, nonatomic) NSDate *pubTime; // @synthesize pubTime=_pubTime;
@property(retain, nonatomic) UIColor *titleColor; // @synthesize titleColor=_titleColor;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;

@end
