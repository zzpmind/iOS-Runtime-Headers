/* Generated by RuntimeBrowser on iPhone OS 4.2.1
   Image: /System/Library/PrivateFrameworks/ImageCapture.framework/ImageCapture
 */

@class NSString;



@interface PTPCameraFile : ICCameraFile 
{
    void *_ptpCameraFileProperties;
    NSString *_path;
}

@property(readonly) NSUInteger type;
@property(readonly) NSUInteger storageID;
@property(readonly) NSUInteger objHandle;
@property(copy) id info;
@property(retain) NSString *path;


- (void)setPath:(id)arg1;
- (id)initWithName:(id)arg1 parentFolder:(id)arg2 device:(id)arg3 type:(NSUInteger)arg4 storageID:(unsigned long)arg5 objectHandle:(unsigned long)arg6;
- (unsigned long)storageID;
- (unsigned long)objHandle;
- (id)thumbData;
- (id)metadataDict;
- (long)writeDataToFile:(NSInteger)arg1 fromOffset:(long long)arg2 ofLength:(long long*)arg3;
- (void)finalize;
- (NSUInteger)type;
- (void)setInfo:(id)arg1;
- (id)info;
- (id)path;
- (void)dealloc;

@end