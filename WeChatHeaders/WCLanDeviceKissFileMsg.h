//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMObject.h"

@class NSString;

@interface WCLanDeviceKissFileMsg : MMObject
{
    BOOL _isContainDetail;
    NSString *_fileName;
    NSString *_filePath;
    NSString *_fileMD5;
    unsigned int _fileSize;
    NSString *_fileExt;
}

@property(copy, nonatomic) NSString *fileExt; // @synthesize fileExt=_fileExt;
@property(nonatomic) unsigned int fileSize; // @synthesize fileSize=_fileSize;
@property(copy, nonatomic) NSString *fileMD5; // @synthesize fileMD5=_fileMD5;
@property(copy, nonatomic) NSString *filePath; // @synthesize filePath=_filePath;
@property(copy, nonatomic) NSString *fileName; // @synthesize fileName=_fileName;
@property(nonatomic) BOOL isContainDetail; // @synthesize isContainDetail=_isContainDetail;
- (void).cxx_destruct;

@end
