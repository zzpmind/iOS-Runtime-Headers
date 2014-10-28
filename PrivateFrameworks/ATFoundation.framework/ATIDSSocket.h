/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ATFoundation.framework/ATFoundation
 */

@class IDSDevice, IDSDeviceConnection;

@interface ATIDSSocket : ATSocket {
    IDSDevice *_device;
    IDSDeviceConnection *_deviceConnection;
    int _priority;
}

@property(readonly) IDSDevice * device;
@property(readonly) int priority;

- (void).cxx_destruct;
- (void)closeDescriptor;
- (void)connectWithCompletion:(id)arg1;
- (void)dealloc;
- (id)device;
- (id)initWithDevice:(id)arg1 priority:(int)arg2;
- (BOOL)open;
- (int)priority;

@end