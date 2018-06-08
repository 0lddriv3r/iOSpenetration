//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CMMotionManager, NSMutableArray, NSMutableDictionary, NSOperationQueue, NSRecursiveLock, NSString;

@interface TLDSensorManager : NSObject
{
    BOOL _oldBatteryMonitoringEnabled;
    BOOL _hasOneSensor;
    unsigned int _maxSenceRecordCount;
    CMMotionManager *_motionManager;
    NSMutableArray *_sensorRecordList;
    NSString *_savePath;
    NSMutableDictionary *_sceneRecordListDic;
    NSOperationQueue *_opeationQueue;
    NSRecursiveLock *_lock;
}

@property(retain, nonatomic) NSRecursiveLock *lock; // @synthesize lock=_lock;
@property(retain, nonatomic) NSOperationQueue *opeationQueue; // @synthesize opeationQueue=_opeationQueue;
@property(nonatomic) BOOL hasOneSensor; // @synthesize hasOneSensor=_hasOneSensor;
@property(retain, nonatomic) NSMutableDictionary *sceneRecordListDic; // @synthesize sceneRecordListDic=_sceneRecordListDic;
@property(nonatomic) BOOL oldBatteryMonitoringEnabled; // @synthesize oldBatteryMonitoringEnabled=_oldBatteryMonitoringEnabled;
@property(retain, nonatomic) NSString *savePath; // @synthesize savePath=_savePath;
@property(retain, nonatomic) NSMutableArray *sensorRecordList; // @synthesize sensorRecordList=_sensorRecordList;
@property(retain, nonatomic) CMMotionManager *motionManager; // @synthesize motionManager=_motionManager;
@property(nonatomic) unsigned int maxSenceRecordCount; // @synthesize maxSenceRecordCount=_maxSenceRecordCount;
- (void).cxx_destruct;
- (void)deleteFiles:(id)arg1;
- (id)getFileItemFromFilename:(id)arg1;
- (void)analyseRecordFiles;
- (id)loadHistoryRecordsFiles;
- (void)checkDirectionAndCreateIfNeed:(id)arg1;
- (id)saveDir;
- (id)getSaveReportHistoryListPath;
- (id)filenameForModel:(id)arg1;
- (id)getSaveFilePath:(id)arg1;
- (id)getRecordModelFromFilename:(id)arg1;
- (void)saveRecordModel:(id)arg1;
- (void)stopSensor;
- (void)addSensorRecord:(id)arg1 forType:(unsigned int)arg2;
- (void)startSensor:(id)arg1;
- (void)stop:(int)arg1;
- (void)start:(int)arg1 action:(int)arg2 duration:(float)arg3;
- (id)init;

@end

