//
// Bareflank Hypervisor
//
// Copyright (C) 2015 Assured Information Security, Inc.
// Author: Rian Quinn        <quinnr@ainfosec.com>
// Author: Brendan Kerrigan  <kerriganb@ainfosec.com>
//
// This library is free software; you can redistribute it and/or
// modify it under the terms of the GNU Lesser General Public
// License as published by the Free Software Foundation; either
// version 2.1 of the License, or (at your option) any later version.
//
// This library is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU
// Lesser General Public License for more details.
//
// You should have received a copy of the GNU Lesser General Public
// License along with this library; if not, write to the Free Software
// Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301 USA

#ifndef IOCTL_PRIVATE_H
#define IOCTL_PRIVATE_H

#include <ioctl.h>

class ioctl_private : public ioctl_private_base
{
public:
    ioctl_private();
    ~ioctl_private() override;

    virtual void open();
    virtual void call_ioctl_add_module_length(uint64_t len);
    virtual void call_ioctl_add_module(const char *data);
    virtual void call_ioctl_load_vmm();
    virtual void call_ioctl_unload_vmm();
    virtual void call_ioctl_start_vmm();
    virtual void call_ioctl_stop_vmm();
    virtual void call_ioctl_dump_vmm(debug_ring_resources_t *drr, uint64_t vcpuid);
    virtual void call_ioctl_vmm_status(int64_t *status);

private:
    int fd;
};

#endif
