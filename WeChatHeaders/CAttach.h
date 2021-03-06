//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray, NSString;

@interface CAttach : NSObject
{
    unsigned long m_uiFileType;
    NSMutableArray *m_arrFileList;
    NSString *m_nsAttachID;
    BOOL isCanPreview;
    NSString *name;
    NSString *path;
    unsigned long size;
}

@property(retain, nonatomic) NSString *m_nsAttachID; // @synthesize m_nsAttachID;
@property(retain, nonatomic) NSMutableArray *m_arrFileList; // @synthesize m_arrFileList;
@property(nonatomic) unsigned long m_uiFileType; // @synthesize m_uiFileType;
@property(nonatomic) unsigned long size; // @synthesize size;
@property(nonatomic) BOOL isCanPreview; // @synthesize isCanPreview;
@property(retain, nonatomic) NSString *path; // @synthesize path;
@property(retain, nonatomic) NSString *name; // @synthesize name;
- (void).cxx_destruct;
- (id)GetAttachIDFromPath;
- (id)GetAttachTempPath:(id)arg1;
- (id)GetAttachPath:(id)arg1;
- (BOOL)IsTextFile;
- (unsigned long)GetPreviewType;
- (id)GetAttachPic;
- (void)AddAttach:(id)arg1 ParentPath:(id)arg2;
- (BOOL)IsCompressFile;
- (id)description;
- (void)dealloc;
- (id)init;

@end

