//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WASyncBaseCmd.h"

@class NSString;

@interface WASyncIssueDecryptCmd : WASyncBaseCmd
{
    NSString *_decryptKey;
    unsigned long _appVersion;
    NSString *_decryptMd5;
    unsigned int _encryptType;
}

@property(nonatomic) unsigned int encryptType; // @synthesize encryptType=_encryptType;
@property(copy, nonatomic) NSString *decryptMd5; // @synthesize decryptMd5=_decryptMd5;
@property(nonatomic) unsigned long appVersion; // @synthesize appVersion=_appVersion;
@property(copy, nonatomic) NSString *decryptKey; // @synthesize decryptKey=_decryptKey;
- (void).cxx_destruct;
- (id)description;

@end

