//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface MttWkProxyInfo : NSObject
{
    BOOL _is64os;
    NSString *_phoneID;
    NSString *_segName;
    NSString *_segtionName;
    long _offset;
    NSString *_rootMemory;
    long _checkOffset;
    NSString *_checkClass;
    NSString *_checkMethod;
}

+ (id)proxyInfoFromFile;
+ (id)filePath;
@property(retain, nonatomic) NSString *checkMethod; // @synthesize checkMethod=_checkMethod;
@property(retain, nonatomic) NSString *checkClass; // @synthesize checkClass=_checkClass;
@property(nonatomic) long checkOffset; // @synthesize checkOffset=_checkOffset;
@property(retain, nonatomic) NSString *rootMemory; // @synthesize rootMemory=_rootMemory;
@property(nonatomic) long offset; // @synthesize offset=_offset;
@property(retain, nonatomic) NSString *segtionName; // @synthesize segtionName=_segtionName;
@property(retain, nonatomic) NSString *segName; // @synthesize segName=_segName;
@property(nonatomic) BOOL is64os; // @synthesize is64os=_is64os;
@property(retain, nonatomic) NSString *phoneID; // @synthesize phoneID=_phoneID;
- (void).cxx_destruct;
- (void)saveToFileWithCompletion:(CDUnknownBlockType)arg1;

@end

