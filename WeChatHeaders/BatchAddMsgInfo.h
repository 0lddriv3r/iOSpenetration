//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CMessageWrap, NSString;

@interface BatchAddMsgInfo : NSObject
{
    BOOL _isCanAddDB;
    BOOL _addDBResult;
    BOOL _isNotify;
    BOOL _isNeedChangeDisplay;
    BOOL _isInsertNew;
    CMessageWrap *_wrapMsg;
    NSString *_chatName;
    unsigned long _uiDes;
    unsigned int _addMsgType;
    NSString *_clusterType;
}

@property(nonatomic) BOOL isInsertNew; // @synthesize isInsertNew=_isInsertNew;
@property(nonatomic) BOOL isNeedChangeDisplay; // @synthesize isNeedChangeDisplay=_isNeedChangeDisplay;
@property(nonatomic) BOOL isNotify; // @synthesize isNotify=_isNotify;
@property(nonatomic) BOOL addDBResult; // @synthesize addDBResult=_addDBResult;
@property(retain, nonatomic) NSString *clusterType; // @synthesize clusterType=_clusterType;
@property(nonatomic) unsigned int addMsgType; // @synthesize addMsgType=_addMsgType;
@property(nonatomic) BOOL isCanAddDB; // @synthesize isCanAddDB=_isCanAddDB;
@property(nonatomic) unsigned long uiDes; // @synthesize uiDes=_uiDes;
@property(retain, nonatomic) NSString *chatName; // @synthesize chatName=_chatName;
@property(retain, nonatomic) CMessageWrap *wrapMsg; // @synthesize wrapMsg=_wrapMsg;
- (void).cxx_destruct;

@end

