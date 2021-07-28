/*
 * WoW64 syscall definitions
 *
 * Copyright 2021 Alexandre Julliard
 *
 * This library is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public
 * License as published by the Free Software Foundation; either
 * version 2.1 of the License, or (at your option) any later version.
 *
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public
 * License along with this library; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA 02110-1301, USA
 */

#ifndef __WOW64_SYSCALL_H
#define __WOW64_SYSCALL_H

#define ALL_SYSCALLS \
    SYSCALL_ENTRY( NtAcceptConnectPort ) \
    SYSCALL_ENTRY( NtAddAtom ) \
    SYSCALL_ENTRY( NtAllocateLocallyUniqueId ) \
    SYSCALL_ENTRY( NtAllocateUuids ) \
    SYSCALL_ENTRY( NtAllocateVirtualMemory ) \
    SYSCALL_ENTRY( NtAllocateVirtualMemoryEx ) \
    SYSCALL_ENTRY( NtAreMappedFilesTheSame ) \
    SYSCALL_ENTRY( NtCancelTimer ) \
    SYSCALL_ENTRY( NtClearEvent ) \
    SYSCALL_ENTRY( NtClearPowerRequest ) \
    SYSCALL_ENTRY( NtClose ) \
    SYSCALL_ENTRY( NtCompleteConnectPort ) \
    SYSCALL_ENTRY( NtConnectPort ) \
    SYSCALL_ENTRY( NtCreateDebugObject ) \
    SYSCALL_ENTRY( NtCreateDirectoryObject ) \
    SYSCALL_ENTRY( NtCreateEvent ) \
    SYSCALL_ENTRY( NtCreateFile ) \
    SYSCALL_ENTRY( NtCreateIoCompletion ) \
    SYSCALL_ENTRY( NtCreateJobObject ) \
    SYSCALL_ENTRY( NtCreateKey ) \
    SYSCALL_ENTRY( NtCreateKeyTransacted ) \
    SYSCALL_ENTRY( NtCreateKeyedEvent ) \
    SYSCALL_ENTRY( NtCreateMutant ) \
    SYSCALL_ENTRY( NtCreatePort ) \
    SYSCALL_ENTRY( NtCreatePowerRequest ) \
    SYSCALL_ENTRY( NtCreateSection ) \
    SYSCALL_ENTRY( NtCreateSemaphore ) \
    SYSCALL_ENTRY( NtCreateSymbolicLinkObject ) \
    SYSCALL_ENTRY( NtCreateTimer ) \
    SYSCALL_ENTRY( NtDebugContinue ) \
    SYSCALL_ENTRY( NtDelayExecution ) \
    SYSCALL_ENTRY( NtDeleteAtom ) \
    SYSCALL_ENTRY( NtDeleteFile ) \
    SYSCALL_ENTRY( NtDeleteKey ) \
    SYSCALL_ENTRY( NtDeleteValueKey ) \
    SYSCALL_ENTRY( NtDuplicateObject ) \
    SYSCALL_ENTRY( NtEnumerateKey ) \
    SYSCALL_ENTRY( NtEnumerateValueKey ) \
    SYSCALL_ENTRY( NtFindAtom ) \
    SYSCALL_ENTRY( NtFlushKey ) \
    SYSCALL_ENTRY( NtFlushVirtualMemory ) \
    SYSCALL_ENTRY( NtFreeVirtualMemory ) \
    SYSCALL_ENTRY( NtGetCurrentProcessorNumber ) \
    SYSCALL_ENTRY( NtGetNlsSectionPtr ) \
    SYSCALL_ENTRY( NtGetWriteWatch ) \
    SYSCALL_ENTRY( NtListenPort ) \
    SYSCALL_ENTRY( NtLoadKey ) \
    SYSCALL_ENTRY( NtLoadKey2 ) \
    SYSCALL_ENTRY( NtLockVirtualMemory ) \
    SYSCALL_ENTRY( NtMakeTemporaryObject ) \
    SYSCALL_ENTRY( NtMapViewOfSection ) \
    SYSCALL_ENTRY( NtOpenDirectoryObject ) \
    SYSCALL_ENTRY( NtOpenEvent ) \
    SYSCALL_ENTRY( NtOpenFile ) \
    SYSCALL_ENTRY( NtOpenIoCompletion ) \
    SYSCALL_ENTRY( NtOpenJobObject ) \
    SYSCALL_ENTRY( NtOpenKey ) \
    SYSCALL_ENTRY( NtOpenKeyEx ) \
    SYSCALL_ENTRY( NtOpenKeyTransacted ) \
    SYSCALL_ENTRY( NtOpenKeyTransactedEx ) \
    SYSCALL_ENTRY( NtOpenKeyedEvent ) \
    SYSCALL_ENTRY( NtOpenMutant ) \
    SYSCALL_ENTRY( NtOpenSection ) \
    SYSCALL_ENTRY( NtOpenSemaphore ) \
    SYSCALL_ENTRY( NtOpenSymbolicLinkObject  ) \
    SYSCALL_ENTRY( NtOpenTimer ) \
    SYSCALL_ENTRY( NtProtectVirtualMemory ) \
    SYSCALL_ENTRY( NtPulseEvent ) \
    SYSCALL_ENTRY( NtQueryDefaultLocale ) \
    SYSCALL_ENTRY( NtQueryDefaultUILanguage ) \
    SYSCALL_ENTRY( NtQueryDirectoryObject ) \
    SYSCALL_ENTRY( NtQueryEvent ) \
    SYSCALL_ENTRY( NtQueryInformationAtom ) \
    SYSCALL_ENTRY( NtQueryInstallUILanguage ) \
    SYSCALL_ENTRY( NtQueryIoCompletion ) \
    SYSCALL_ENTRY( NtQueryKey ) \
    SYSCALL_ENTRY( NtQueryMultipleValueKey ) \
    SYSCALL_ENTRY( NtQueryMutant ) \
    SYSCALL_ENTRY( NtQueryObject ) \
    SYSCALL_ENTRY( NtQueryPerformanceCounter ) \
    SYSCALL_ENTRY( NtQuerySection ) \
    SYSCALL_ENTRY( NtQuerySemaphore  ) \
    SYSCALL_ENTRY( NtQuerySymbolicLinkObject ) \
    SYSCALL_ENTRY( NtQueryTimer ) \
    SYSCALL_ENTRY( NtQueryTimerResolution ) \
    SYSCALL_ENTRY( NtQueryValueKey ) \
    SYSCALL_ENTRY( NtQueryVirtualMemory ) \
    SYSCALL_ENTRY( NtReadVirtualMemory ) \
    SYSCALL_ENTRY( NtReleaseKeyedEvent ) \
    SYSCALL_ENTRY( NtReleaseMutant ) \
    SYSCALL_ENTRY( NtReleaseSemaphore ) \
    SYSCALL_ENTRY( NtRenameKey ) \
    SYSCALL_ENTRY( NtReplaceKey ) \
    SYSCALL_ENTRY( NtReplyWaitReceivePort ) \
    SYSCALL_ENTRY( NtRequestWaitReplyPort ) \
    SYSCALL_ENTRY( NtResetEvent ) \
    SYSCALL_ENTRY( NtResetWriteWatch ) \
    SYSCALL_ENTRY( NtRestoreKey ) \
    SYSCALL_ENTRY( NtSaveKey ) \
    SYSCALL_ENTRY( NtSecureConnectPort ) \
    SYSCALL_ENTRY( NtSetDefaultLocale ) \
    SYSCALL_ENTRY( NtSetDefaultUILanguage ) \
    SYSCALL_ENTRY( NtSetEvent ) \
    SYSCALL_ENTRY( NtSetInformationDebugObject ) \
    SYSCALL_ENTRY( NtSetInformationKey ) \
    SYSCALL_ENTRY( NtSetInformationObject ) \
    SYSCALL_ENTRY( NtSetIoCompletion ) \
    SYSCALL_ENTRY( NtSetPowerRequest ) \
    SYSCALL_ENTRY( NtSetTimer ) \
    SYSCALL_ENTRY( NtSetTimerResolution ) \
    SYSCALL_ENTRY( NtSetValueKey ) \
    SYSCALL_ENTRY( NtSignalAndWaitForSingleObject ) \
    SYSCALL_ENTRY( NtTerminateJobObject ) \
    SYSCALL_ENTRY( NtUnloadKey ) \
    SYSCALL_ENTRY( NtUnlockVirtualMemory ) \
    SYSCALL_ENTRY( NtUnmapViewOfSection ) \
    SYSCALL_ENTRY( NtWaitForDebugEvent ) \
    SYSCALL_ENTRY( NtWaitForKeyedEvent ) \
    SYSCALL_ENTRY( NtWaitForMultipleObjects ) \
    SYSCALL_ENTRY( NtWaitForSingleObject ) \
    SYSCALL_ENTRY( NtWow64AllocateVirtualMemory64 ) \
    SYSCALL_ENTRY( NtWow64ReadVirtualMemory64 ) \
    SYSCALL_ENTRY( NtWow64WriteVirtualMemory64 ) \
    SYSCALL_ENTRY( NtWriteVirtualMemory ) \
    SYSCALL_ENTRY( NtYieldExecution )

#endif /* __WOW64_SYSCALL_H */
